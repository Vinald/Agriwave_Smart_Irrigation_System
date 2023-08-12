#ifndef PIPELINE_H
#define PIPELINE_H

#include <Arduino.h>

class pipeline {
public:
    pipeline();

    void my_scaler();
    float transform(float* features); // Add this method
};

#endif // PIPELINE_H

// #ifndef PIPELINE_H
// #define PIPELINE_H

// #include <Arduino.h>

// class pipeline {
// public:
//     pipeline();

//     float transform(float* features); // Define the transform method
//     //void my_scaler(); // Define the my_scaler method (assuming it's part of your pipeline)
// };

// #endif // PIPELINE_H

