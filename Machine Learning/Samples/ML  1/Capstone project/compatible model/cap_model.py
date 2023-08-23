import sklearn
import joblib
NUM_FEATURES = 12


def convert_model_to_esp32_h(model_path, output_path):
    model = joblib.load(model_path)

    with open(output_path, 'w') as file:
        file.write('#pragma once\n')
        file.write('#define NUM_ESTIMATORS {}\n'.format(len(model.estimator)))
        file.write('#define NUM_NODES {}\n'.format(model.estimator[0].tree_.node_count))
        file.write('#define NUM_FEATURES {}\n'.format(NUM_FEATURES))
        file.write('const float decision_trees[NUM_ESTIMATORS][NUM_NODES][NUM_FEATURES + 1] = {\n')

        for tree in model.estimators:
            file.write('\t{')
            tree_str = repr(tree.tree_).replace('\n', '').replace('array', '').replace('  ', ' ')
            tree_str = tree_str[1:-1]  # Remove the outer brackets

            # Split the tree into individual nodes
            nodes = tree_str.split(',')
            for node in nodes:
                node_str = node.strip()
                file.write('{}, '.format(node_str))

            file.write('},\n')

        file.write('};\n')


convert_model_to_esp32_h('RFC_model.joblib', 'my_model.h')
