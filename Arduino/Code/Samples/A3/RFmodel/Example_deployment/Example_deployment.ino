#include "DecisionTree.h"

Eloquent::ML::Port::DecisionTree clf;

void setup() {
    Serial.begin(9600);
    Serial.println("Begin");
}

void loop() {
    float irisSample[4] = {6.2, 2.8, 4.8, 1.8};

    Serial.print("Predicted label (you should see '2': ");
    Serial.println(clf.predict(irisSample));
    delay(1000);
}