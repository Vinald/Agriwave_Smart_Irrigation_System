#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[2] = { 0 };
                        // tree #1
                        if (x[3] <= 20.5) {
                            if (x[3] <= 18.5) {
                                if (x[2] <= 503.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 6.0) {
                                    if (x[2] <= 504.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 687.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 19.5) {
                                        if (x[2] <= 430.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 32.5) {
                                if (x[0] <= 6.5) {
                                    if (x[1] <= 6.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 8.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 334.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 492.0) {
                                                    if (x[3] <= 29.5) {
                                                        if (x[0] <= 1.5) {
                                                            if (x[3] <= 22.5) {
                                                                if (x[2] <= 390.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    if (x[2] <= 441.0) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 5.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 649.5) {
                                                        if (x[0] <= 1.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 27.5) {
                                        if (x[2] <= 409.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 513.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 51.5) {
                                    if (x[3] <= 37.5) {
                                        if (x[1] <= 50.5) {
                                            if (x[0] <= 1.5) {
                                                if (x[2] <= 650.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 311.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 142.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 174.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[2] <= 375.0) {
                            if (x[3] <= 29.5) {
                                if (x[2] <= 349.5) {
                                    if (x[2] <= 325.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.0) {
                                            if (x[0] <= 2.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 21.5) {
                                        if (x[3] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 265.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 56.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 77.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 6.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 625.0) {
                                        if (x[3] <= 22.5) {
                                            if (x[1] <= 35.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 118.0) {
                                            if (x[1] <= 57.0) {
                                                if (x[1] <= 52.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 22.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 985.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 20.5) {
                                    if (x[1] <= 67.5) {
                                        if (x[3] <= 16.5) {
                                            if (x[2] <= 506.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 18.5) {
                                                if (x[1] <= 40.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 45.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 82.0) {
                                                if (x[2] <= 518.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 480.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 154.0) {
                                        if (x[1] <= 120.0) {
                                            if (x[2] <= 419.0) {
                                                if (x[0] <= 5.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 557.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 176.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #3
                        if (x[2] <= 349.5) {
                            if (x[1] <= 2.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 8.0) {
                                    if (x[2] <= 324.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            if (x[1] <= 6.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 334.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 46.0) {
                                            if (x[3] <= 29.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 520.0) {
                                if (x[1] <= 108.0) {
                                    if (x[0] <= 1.5) {
                                        if (x[3] <= 22.5) {
                                            if (x[2] <= 416.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 49.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            if (x[0] <= 2.5) {
                                                if (x[3] <= 17.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 19.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 420.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 21.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 34.5) {
                                            if (x[2] <= 680.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 55.5) {
                                                    if (x[3] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 37.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 564.5) {
                                        if (x[2] <= 557.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 109.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[2] <= 349.5) {
                            if (x[0] <= 3.5) {
                                if (x[2] <= 325.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 24.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 0.5) {
                                if (x[2] <= 600.5) {
                                    if (x[3] <= 22.5) {
                                        if (x[1] <= 35.5) {
                                            if (x[3] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 23.5) {
                                        if (x[3] <= 22.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 890.0) {
                                                if (x[1] <= 29.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 715.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 22.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 118.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 34.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 462.0) {
                                    if (x[3] <= 19.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 113.5) {
                                            if (x[1] <= 37.5) {
                                                if (x[0] <= 1.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 28.0) {
                                                    if (x[1] <= 82.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 492.0) {
                                        if (x[1] <= 66.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 117.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 22.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[3] <= 19.5) {
                            if (x[2] <= 502.5) {
                                if (x[1] <= 8.0) {
                                    if (x[0] <= 4.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 18.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 118.0) {
                                if (x[3] <= 29.5) {
                                    if (x[2] <= 385.0) {
                                        if (x[2] <= 349.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 24.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 5.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            if (x[2] <= 649.5) {
                                                if (x[3] <= 22.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 4.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 322.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 15.5) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1.5) {
                                                if (x[1] <= 32.0) {
                                                    if (x[1] <= 27.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 182.0) {
                                    if (x[2] <= 674.0) {
                                        if (x[2] <= 608.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 31.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 845.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 205.0) {
                                        if (x[2] <= 459.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #6
                        if (x[2] <= 374.5) {
                            if (x[2] <= 329.5) {
                                if (x[1] <= 2.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 24.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 53.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 27.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 344.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 469.5) {
                                if (x[0] <= 4.5) {
                                    if (x[0] <= 1.5) {
                                        if (x[3] <= 22.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 439.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 457.0) {
                                            if (x[1] <= 35.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 444.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 23.5) {
                                    if (x[0] <= 0.5) {
                                        if (x[1] <= 43.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 62.0) {
                                                if (x[3] <= 20.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 22.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 117.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 162.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 10.0) {
                                        if (x[3] <= 28.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 34.5) {
                                            if (x[1] <= 20.5) {
                                                if (x[0] <= 1.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 112.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 3.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #7
                        if (x[0] <= 4.5) {
                            if (x[2] <= 334.5) {
                                if (x[1] <= 2.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 325.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 45.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 24.5) {
                                    if (x[2] <= 416.0) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 38.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 0.5) {
                                            if (x[3] <= 21.5) {
                                                if (x[1] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 22.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 750.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 24.0) {
                                                if (x[3] <= 23.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2.0) {
                                        if (x[2] <= 550.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 674.0) {
                                                if (x[1] <= 112.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 474.0) {
                                if (x[1] <= 23.5) {
                                    if (x[0] <= 7.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 435.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 444.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 6.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 25.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #8
                        if (x[1] <= 183.0) {
                            if (x[3] <= 26.5) {
                                if (x[1] <= 101.0) {
                                    if (x[2] <= 431.0) {
                                        if (x[2] <= 349.5) {
                                            if (x[2] <= 329.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 9.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 354.5) {
                                                if (x[1] <= 10.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 17.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 29.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 69.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 16.0) {
                                            if (x[1] <= 33.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 492.0) {
                                                if (x[1] <= 43.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 85.0) {
                                                        if (x[1] <= 71.0) {
                                                            if (x[0] <= 6.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 13.5) {
                                                    if (x[2] <= 650.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 568.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 574.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 0.5) {
                                                                if (x[2] <= 675.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 548.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 138.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 267.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 5.0) {
                                        if (x[0] <= 2.0) {
                                            if (x[1] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 544.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 114.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3.5) {
                                                if (x[3] <= 30.5) {
                                                    if (x[2] <= 344.0) {
                                                        if (x[1] <= 45.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 476.5) {
                                            if (x[0] <= 7.5) {
                                                if (x[3] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 6.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 485.0) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #9
                        if (x[1] <= 1.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[2] <= 469.5) {
                                if (x[3] <= 34.5) {
                                    if (x[2] <= 346.0) {
                                        if (x[3] <= 28.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 318.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 4.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 18.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 119.5) {
                                                    if (x[2] <= 385.0) {
                                                        if (x[2] <= 363.5) {
                                                            if (x[0] <= 4.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 20.0) {
                                                            if (x[0] <= 3.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 444.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 5.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        if (x[2] <= 600.5) {
                                            if (x[3] <= 34.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 669.0) {
                                                if (x[2] <= 656.5) {
                                                    if (x[2] <= 649.5) {
                                                        if (x[3] <= 32.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 55.5) {
                                                    if (x[3] <= 20.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[3] <= 29.5) {
                            if (x[3] <= 18.5) {
                                if (x[2] <= 504.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 415.0) {
                                    if (x[2] <= 325.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 27.0) {
                                            if (x[3] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 5.0) {
                                                    if (x[3] <= 24.5) {
                                                        if (x[0] <= 1.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 27.5) {
                                        if (x[0] <= 1.5) {
                                            if (x[2] <= 568.5) {
                                                if (x[1] <= 39.5) {
                                                    if (x[2] <= 431.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 669.0) {
                                                    if (x[1] <= 54.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 434.0) {
                                                if (x[0] <= 3.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 109.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 19.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 652.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 165.0) {
                                if (x[2] <= 427.5) {
                                    if (x[0] <= 1.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 334.5) {
                                            if (x[1] <= 17.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 527.0) {
                                        if (x[1] <= 5.5) {
                                            if (x[2] <= 475.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 6.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 568.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #11
                        if (x[2] <= 515.0) {
                            if (x[2] <= 329.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 28.5) {
                                    if (x[1] <= 22.0) {
                                        if (x[2] <= 347.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 20.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 415.0) {
                                                if (x[3] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 5.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 445.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 53.5) {
                                                        if (x[2] <= 464.0) {
                                                            if (x[3] <= 25.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 22.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 120.0) {
                                            if (x[0] <= 5.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 649.5) {
                                if (x[0] <= 1.0) {
                                    if (x[3] <= 32.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 11.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #12
                        if (x[3] <= 29.5) {
                            if (x[3] <= 18.5) {
                                if (x[0] <= 3.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 6.0) {
                                        if (x[2] <= 506.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 14.0) {
                                            if (x[1] <= 11.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 469.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 385.0) {
                                    if (x[1] <= 20.0) {
                                        if (x[1] <= 12.0) {
                                            if (x[2] <= 347.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 8.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 290.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        if (x[3] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 22.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 649.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 19.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 669.0) {
                                                            if (x[3] <= 23.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            if (x[2] <= 412.5) {
                                                if (x[0] <= 5.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 585.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 114.5) {
                                if (x[0] <= 1.5) {
                                    if (x[3] <= 32.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 67.5) {
                                            if (x[2] <= 600.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 67.5) {
                                        if (x[2] <= 334.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 674.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #13
                        if (x[2] <= 375.0) {
                            if (x[1] <= 2.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 329.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 24.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 6.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 5.5) {
                                                if (x[2] <= 334.5) {
                                                    if (x[1] <= 45.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 519.0) {
                                if (x[1] <= 103.0) {
                                    if (x[3] <= 20.0) {
                                        if (x[1] <= 27.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            if (x[1] <= 22.0) {
                                                if (x[3] <= 22.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 5.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 419.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 140.5) {
                                        if (x[1] <= 13.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 34.5) {
                                                if (x[1] <= 43.0) {
                                                    if (x[1] <= 39.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 72.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #14
                        if (x[3] <= 29.5) {
                            if (x[0] <= 7.5) {
                                if (x[2] <= 514.5) {
                                    if (x[0] <= 4.5) {
                                        if (x[2] <= 349.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 458.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 71.0) {
                                                if (x[3] <= 17.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 4.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 0.5) {
                                            if (x[1] <= 67.5) {
                                                if (x[2] <= 680.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 50.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 116.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 156.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 73.0) {
                                    if (x[3] <= 22.5) {
                                        if (x[3] <= 20.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 21.5) {
                                                if (x[2] <= 336.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 28.0) {
                                            if (x[2] <= 324.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 500.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 163.0) {
                                if (x[1] <= 35.0) {
                                    if (x[0] <= 1.5) {
                                        if (x[2] <= 600.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 261.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 6.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 31.5) {
                                            if (x[2] <= 466.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 568.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #15
                        if (x[2] <= 394.5) {
                            if (x[1] <= 25.5) {
                                if (x[3] <= 36.0) {
                                    if (x[0] <= 3.5) {
                                        if (x[2] <= 276.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 9.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 334.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 28.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 117.0) {
                                if (x[0] <= 1.5) {
                                    if (x[2] <= 550.0) {
                                        if (x[3] <= 22.5) {
                                            if (x[1] <= 35.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 21.5) {
                                            if (x[0] <= 0.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 669.0) {
                                                if (x[3] <= 32.0) {
                                                    if (x[1] <= 54.0) {
                                                        if (x[2] <= 649.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 434.0) {
                                        if (x[0] <= 4.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 17.5) {
                                            if (x[2] <= 504.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 679.5) {
                                    if (x[2] <= 557.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 663.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #16
                        if (x[2] <= 349.5) {
                            if (x[3] <= 29.5) {
                                if (x[1] <= 7.5) {
                                    if (x[2] <= 324.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 265.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 3.5) {
                                        if (x[1] <= 53.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 72.5) {
                                    if (x[1] <= 21.5) {
                                        if (x[2] <= 651.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 0.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 37.0) {
                                            if (x[2] <= 610.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 750.0) {
                                                    if (x[1] <= 52.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 545.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 930.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 140.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 473.5) {
                                    if (x[3] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 24.5) {
                                                if (x[1] <= 101.0) {
                                                    if (x[2] <= 434.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 7.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 400.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 117.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #17
                        if (x[1] <= 2.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[3] <= 29.5) {
                                if (x[0] <= 7.5) {
                                    if (x[1] <= 91.5) {
                                        if (x[3] <= 18.5) {
                                            if (x[2] <= 498.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 21.5) {
                                                if (x[2] <= 435.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 0.5) {
                                                        if (x[3] <= 20.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 61.0) {
                                                                if (x[1] <= 25.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 90.5) {
                                                    if (x[1] <= 87.0) {
                                                        if (x[3] <= 22.5) {
                                                            if (x[1] <= 22.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 519.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 85.5) {
                                                                if (x[3] <= 25.5) {
                                                                    if (x[2] <= 669.0) {
                                                                        if (x[0] <= 2.0) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[3] <= 24.5) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 11.5) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 5.0) {
                                                                        if (x[2] <= 663.5) {
                                                                            if (x[2] <= 282.5) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 434.5) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 18.5) {
                                            if (x[1] <= 97.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 524.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 498.5) {
                                                if (x[0] <= 4.5) {
                                                    if (x[3] <= 24.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 3.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 26.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 585.5) {
                                                    if (x[1] <= 110.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 403.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 326.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 674.0) {
                                        if (x[1] <= 112.5) {
                                            if (x[0] <= 1.5) {
                                                if (x[2] <= 550.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #18
                        if (x[2] <= 394.5) {
                            if (x[2] <= 349.5) {
                                if (x[2] <= 329.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 24.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 344.0) {
                                            if (x[2] <= 334.5) {
                                                if (x[1] <= 5.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 23.0) {
                                    if (x[3] <= 21.5) {
                                        if (x[1] <= 10.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 28.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 459.5) {
                                if (x[2] <= 453.0) {
                                    if (x[1] <= 135.5) {
                                        if (x[2] <= 431.0) {
                                            if (x[2] <= 405.0) {
                                                if (x[1] <= 87.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 2.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 3.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 18.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 7.5) {
                                        if (x[0] <= 4.0) {
                                            if (x[0] <= 2.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 22.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 117.0) {
                                            if (x[2] <= 600.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 25.0) {
                                                    if (x[2] <= 675.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 140.5) {
                                                if (x[1] <= 120.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 57.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 499.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 3.0) {
                                                if (x[2] <= 564.5) {
                                                    if (x[2] <= 554.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 109.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #19
                        if (x[2] <= 459.5) {
                            if (x[2] <= 325.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 22.5) {
                                    if (x[1] <= 9.0) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 16.0) {
                                            if (x[3] <= 22.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 28.5) {
                                        if (x[1] <= 85.5) {
                                            if (x[1] <= 23.5) {
                                                if (x[0] <= 4.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 415.0) {
                                                if (x[3] <= 25.5) {
                                                    if (x[0] <= 5.5) {
                                                        if (x[0] <= 2.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 103.5) {
                                                    if (x[0] <= 6.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 135.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 5.5) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 0.5) {
                                if (x[1] <= 23.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 680.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 135.0) {
                                            if (x[1] <= 55.5) {
                                                if (x[1] <= 46.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    if (x[2] <= 568.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 109.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 127.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #20
                        if (x[2] <= 334.5) {
                            if (x[3] <= 28.5) {
                                if (x[1] <= 7.5) {
                                    if (x[2] <= 315.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 2.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 318.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            if (x[1] <= 45.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 492.0) {
                                if (x[0] <= 1.5) {
                                    if (x[3] <= 22.5) {
                                        if (x[3] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 0.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 19.5) {
                                        if (x[2] <= 439.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 3.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 113.5) {
                                            if (x[3] <= 26.5) {
                                                if (x[1] <= 37.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 82.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 5.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 405.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 118.0) {
                                    if (x[0] <= 0.5) {
                                        if (x[3] <= 24.0) {
                                            if (x[2] <= 645.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 33.5) {
                                        if (x[2] <= 585.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 883.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #21
                        if (x[3] <= 27.5) {
                            if (x[2] <= 349.5) {
                                if (x[1] <= 8.0) {
                                    if (x[3] <= 23.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 17.5) {
                                    if (x[1] <= 23.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 559.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 22.5) {
                                        if (x[2] <= 472.5) {
                                            if (x[1] <= 39.0) {
                                                if (x[0] <= 1.0) {
                                                    if (x[1] <= 14.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 20.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 1.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 113.0) {
                                                if (x[3] <= 19.5) {
                                                    if (x[0] <= 1.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 585.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 574.0) {
                                            if (x[2] <= 353.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 2.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 75.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 19.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 6.5) {
                                if (x[2] <= 275.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 2.0) {
                                        if (x[1] <= 22.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 29.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 545.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 33.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 635.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 3.5) {
                                            if (x[3] <= 29.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 513.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #22
                        if (x[2] <= 491.0) {
                            if (x[3] <= 29.5) {
                                if (x[2] <= 349.5) {
                                    if (x[2] <= 329.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 23.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 26.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        if (x[1] <= 22.0) {
                                            if (x[1] <= 19.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 21.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 20.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 128.5) {
                                                    if (x[1] <= 63.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 265.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 102.5) {
                                        if (x[2] <= 432.5) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 334.5) {
                                                    if (x[1] <= 33.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 38.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 23.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 680.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 20.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 117.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 131.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 14.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #23
                        if (x[2] <= 394.5) {
                            if (x[2] <= 349.5) {
                                if (x[2] <= 325.5) {
                                    if (x[1] <= 2.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 24.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            if (x[1] <= 53.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 24.0) {
                                    if (x[0] <= 3.5) {
                                        if (x[3] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 5.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 515.0) {
                                if (x[1] <= 89.0) {
                                    if (x[2] <= 499.0) {
                                        if (x[0] <= 1.5) {
                                            if (x[3] <= 23.0) {
                                                if (x[3] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 18.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 31.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 22.0) {
                                        if (x[1] <= 103.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2.5) {
                                    if (x[2] <= 564.5) {
                                        if (x[3] <= 20.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 6.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 140.5) {
                                                if (x[1] <= 55.5) {
                                                    if (x[2] <= 649.5) {
                                                        if (x[3] <= 34.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 19.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 22.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 23.5) {
                                                            if (x[2] <= 685.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #24
                        if (x[3] <= 29.5) {
                            if (x[2] <= 431.0) {
                                if (x[2] <= 329.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 23.5) {
                                        if (x[1] <= 27.0) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 5.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 493.0) {
                                    if (x[2] <= 456.5) {
                                        if (x[1] <= 66.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 81.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 445.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 453.0) {
                                                        if (x[3] <= 25.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 53.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 0.5) {
                                        if (x[1] <= 25.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 675.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 20.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 22.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 138.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 109.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 585.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 31.5) {
                                if (x[2] <= 334.5) {
                                    if (x[0] <= 3.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 5.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 30.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 558.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 290.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        if (x[1] <= 18.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 685.0) {
                                                if (x[1] <= 112.5) {
                                                    if (x[2] <= 500.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 165.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #25
                        if (x[3] <= 29.5) {
                            if (x[1] <= 1.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 462.0) {
                                    if (x[0] <= 4.5) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 18.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 315.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 449.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 7.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 6.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 915.0) {
                                            if (x[0] <= 1.5) {
                                                if (x[1] <= 84.5) {
                                                    if (x[2] <= 649.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 0.5) {
                                                            if (x[3] <= 22.0) {
                                                                if (x[1] <= 50.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 482.0) {
                                                    if (x[1] <= 73.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 95.0) {
                                if (x[2] <= 340.0) {
                                    if (x[2] <= 265.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 33.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        if (x[2] <= 600.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 183.0) {
                                    if (x[2] <= 674.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #26
                        if (x[0] <= 4.5) {
                            if (x[2] <= 346.0) {
                                if (x[2] <= 325.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 53.0) {
                                        if (x[0] <= 2.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    if (x[3] <= 25.5) {
                                        if (x[2] <= 568.5) {
                                            if (x[0] <= 0.5) {
                                                if (x[2] <= 416.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 4.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 0.5) {
                                                    if (x[1] <= 124.0) {
                                                        if (x[2] <= 735.0) {
                                                            if (x[3] <= 22.0) {
                                                                if (x[3] <= 20.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 550.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2.5) {
                                        if (x[3] <= 17.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 478.0) {
                                if (x[1] <= 2.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 18.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 420.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 27.0) {
                                                if (x[0] <= 6.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #27
                        if (x[3] <= 29.5) {
                            if (x[2] <= 431.0) {
                                if (x[2] <= 349.5) {
                                    if (x[3] <= 28.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 3.5) {
                                            if (x[2] <= 282.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            if (x[0] <= 2.5) {
                                                if (x[1] <= 38.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 89.0) {
                                    if (x[0] <= 1.5) {
                                        if (x[1] <= 42.0) {
                                            if (x[3] <= 20.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 441.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 625.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 449.5) {
                                            if (x[2] <= 448.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 15.5) {
                                                if (x[2] <= 506.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 518.0) {
                                        if (x[0] <= 6.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 24.0) {
                                                if (x[1] <= 182.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 101.0) {
                                if (x[2] <= 334.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        if (x[3] <= 33.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 500.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 529.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #28
                        if (x[2] <= 329.5) {
                            if (x[1] <= 2.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 23.5) {
                                if (x[2] <= 472.5) {
                                    if (x[0] <= 6.0) {
                                        if (x[1] <= 15.0) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 69.0) {
                                            if (x[2] <= 398.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 22.5) {
                                        if (x[0] <= 0.5) {
                                            if (x[3] <= 20.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 563.5) {
                                                if (x[1] <= 110.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 0.5) {
                                            if (x[2] <= 750.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 890.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 459.0) {
                                    if (x[0] <= 1.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 456.5) {
                                            if (x[1] <= 108.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 0.5) {
                                        if (x[2] <= 685.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #29
                        if (x[3] <= 29.5) {
                            if (x[2] <= 493.0) {
                                if (x[2] <= 349.5) {
                                    if (x[2] <= 329.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.0) {
                                            if (x[0] <= 2.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 36.5) {
                                        if (x[0] <= 1.5) {
                                            if (x[3] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 23.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 91.0) {
                                            if (x[0] <= 6.5) {
                                                if (x[1] <= 62.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 63.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 353.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 4.5) {
                                                    if (x[1] <= 102.0) {
                                                        if (x[0] <= 2.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 102.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 65.5) {
                                        if (x[3] <= 22.0) {
                                            if (x[1] <= 25.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 23.5) {
                                            if (x[1] <= 124.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 6.5) {
                                if (x[2] <= 265.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        if (x[2] <= 550.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 685.0) {
                                                if (x[3] <= 37.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 568.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #30
                        if (x[2] <= 346.0) {
                            if (x[2] <= 334.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 2.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 48.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 462.0) {
                                if (x[1] <= 119.5) {
                                    if (x[2] <= 431.0) {
                                        if (x[3] <= 28.5) {
                                            if (x[0] <= 4.5) {
                                                if (x[1] <= 78.5) {
                                                    if (x[0] <= 1.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 18.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 412.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 427.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2.0) {
                                            if (x[1] <= 22.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 4.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 6.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 23.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 23.5) {
                                            if (x[1] <= 43.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 645.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 118.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 34.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 563.5) {
                                        if (x[2] <= 557.5) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #31
                        if (x[3] <= 29.5) {
                            if (x[2] <= 493.0) {
                                if (x[3] <= 20.5) {
                                    if (x[2] <= 439.0) {
                                        if (x[2] <= 349.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 18.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 457.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 7.5) {
                                        if (x[2] <= 365.0) {
                                            if (x[0] <= 4.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 385.0) {
                                                if (x[2] <= 325.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 339.5) {
                                                        if (x[3] <= 25.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 119.5) {
                                                    if (x[3] <= 24.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 5.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 35.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[2] <= 710.0) {
                                        if (x[1] <= 79.5) {
                                            if (x[3] <= 22.0) {
                                                if (x[1] <= 50.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 785.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 825.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 930.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 23.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 117.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 21.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 328.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    if (x[2] <= 685.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 6.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 168.0) {
                                            if (x[3] <= 31.5) {
                                                if (x[2] <= 574.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 183.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #32
                        if (x[3] <= 29.5) {
                            if (x[1] <= 7.5) {
                                if (x[2] <= 377.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 18.5) {
                                    if (x[2] <= 498.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 349.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 493.0) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 5.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 419.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 107.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 0.5) {
                                                if (x[3] <= 23.5) {
                                                    if (x[2] <= 750.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 117.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 4.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 91.5) {
                                if (x[0] <= 1.5) {
                                    if (x[2] <= 600.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 33.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 284.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 529.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 3.5) {
                                        if (x[1] <= 112.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 34.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #33
                        if (x[3] <= 29.5) {
                            if (x[2] <= 435.0) {
                                if (x[1] <= 14.0) {
                                    if (x[2] <= 325.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 22.5) {
                                            if (x[3] <= 20.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 488.0) {
                                    if (x[0] <= 7.5) {
                                        if (x[2] <= 448.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 68.0) {
                                                if (x[0] <= 6.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 6.5) {
                                        if (x[2] <= 620.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 0.5) {
                                            if (x[3] <= 20.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 674.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 138.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 165.0) {
                                if (x[2] <= 340.0) {
                                    if (x[1] <= 2.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 6.5) {
                                        if (x[0] <= 1.5) {
                                            if (x[1] <= 19.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 31.5) {
                                            if (x[1] <= 144.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 34.5) {
                                    if (x[1] <= 176.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 564.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #34
                        if (x[0] <= 4.5) {
                            if (x[2] <= 346.0) {
                                if (x[3] <= 28.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 45.5) {
                                        if (x[2] <= 261.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 115.0) {
                                    if (x[0] <= 1.5) {
                                        if (x[2] <= 669.0) {
                                            if (x[3] <= 22.5) {
                                                if (x[1] <= 25.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 550.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 44.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 0.5) {
                                                if (x[2] <= 840.0) {
                                                    if (x[2] <= 785.0) {
                                                        if (x[3] <= 22.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 15.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 17.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 134.0) {
                                if (x[2] <= 449.5) {
                                    if (x[2] <= 435.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 19.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 109.0) {
                                        if (x[3] <= 17.5) {
                                            if (x[2] <= 504.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 562.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 190.0) {
                                    if (x[3] <= 31.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 33.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 195.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #35
                        if (x[2] <= 394.5) {
                            if (x[3] <= 33.5) {
                                if (x[3] <= 29.5) {
                                    if (x[1] <= 26.5) {
                                        if (x[2] <= 349.5) {
                                            if (x[3] <= 28.5) {
                                                if (x[2] <= 325.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 24.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 26.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 14.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 2.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 344.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 240.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 492.0) {
                                if (x[0] <= 1.5) {
                                    if (x[3] <= 22.5) {
                                        if (x[2] <= 416.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 4.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 32.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 6.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 110.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 22.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 955.0) {
                                            if (x[1] <= 55.5) {
                                                if (x[3] <= 26.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 140.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #36
                        if (x[2] <= 385.0) {
                            if (x[2] <= 329.5) {
                                if (x[1] <= 2.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 102.0) {
                                    if (x[3] <= 28.5) {
                                        if (x[1] <= 10.0) {
                                            if (x[1] <= 8.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 338.5) {
                                            if (x[1] <= 45.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 117.0) {
                                if (x[0] <= 1.5) {
                                    if (x[3] <= 21.5) {
                                        if (x[1] <= 28.5) {
                                            if (x[2] <= 726.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 669.0) {
                                            if (x[3] <= 22.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 50.5) {
                                                    if (x[1] <= 33.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 23.5) {
                                                if (x[1] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 431.0) {
                                        if (x[3] <= 21.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 5.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 462.0) {
                                            if (x[2] <= 453.0) {
                                                if (x[3] <= 18.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 71.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 183.0) {
                                    if (x[2] <= 674.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 27.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #37
                        if (x[2] <= 375.0) {
                            if (x[2] <= 343.5) {
                                if (x[1] <= 2.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 28.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 27.0) {
                                            if (x[2] <= 240.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 46.0) {
                                                if (x[1] <= 39.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 29.0) {
                                    if (x[1] <= 21.5) {
                                        if (x[1] <= 8.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            if (x[3] <= 24.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 15.5) {
                                if (x[2] <= 506.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    if (x[2] <= 585.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 674.0) {
                                            if (x[2] <= 660.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 825.0) {
                                                if (x[3] <= 24.0) {
                                                    if (x[1] <= 25.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 20.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 111.5) {
                                        if (x[2] <= 412.5) {
                                            if (x[3] <= 29.0) {
                                                if (x[0] <= 5.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 75.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 78.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 585.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #38
                        if (x[3] <= 29.5) {
                            if (x[1] <= 209.0) {
                                if (x[2] <= 473.5) {
                                    if (x[2] <= 345.0) {
                                        if (x[3] <= 28.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 3.5) {
                                                if (x[0] <= 2.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 275.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 37.0) {
                                            if (x[1] <= 7.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 8.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 1.5) {
                                                        if (x[3] <= 22.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 65.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 18.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
                                                        if (x[0] <= 1.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 78.0) {
                                                                if (x[2] <= 444.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 955.0) {
                                        if (x[1] <= 6.5) {
                                            if (x[2] <= 600.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2.5) {
                                                if (x[1] <= 118.5) {
                                                    if (x[3] <= 22.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 669.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 1.5) {
                                if (x[3] <= 34.5) {
                                    if (x[2] <= 707.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 550.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 635.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 72.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 280.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 120.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 141.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 567.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #39
                        if (x[3] <= 29.5) {
                            if (x[3] <= 18.5) {
                                if (x[3] <= 14.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 16.5) {
                                        if (x[1] <= 18.5) {
                                            if (x[2] <= 430.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 6.0) {
                                            if (x[2] <= 498.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 444.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 435.0) {
                                    if (x[2] <= 325.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 24.0) {
                                            if (x[0] <= 3.5) {
                                                if (x[0] <= 1.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 415.0) {
                                                if (x[0] <= 1.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 53.0) {
                                                        if (x[1] <= 32.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 494.5) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 102.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 0.5) {
                                            if (x[3] <= 28.5) {
                                                if (x[3] <= 20.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 43.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 680.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 67.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 165.0) {
                                if (x[2] <= 334.5) {
                                    if (x[1] <= 2.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        if (x[2] <= 550.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 114.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 120.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 117.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 141.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 176.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 179.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #40
                        if (x[3] <= 19.5) {
                            if (x[1] <= 37.0) {
                                if (x[2] <= 429.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 517.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 334.5) {
                                if (x[2] <= 290.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 4.5) {
                                        if (x[3] <= 25.5) {
                                            if (x[3] <= 22.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 303.0) {
                                                if (x[0] <= 2.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    if (x[1] <= 18.0) {
                                        if (x[3] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 674.0) {
                                            if (x[3] <= 22.5) {
                                                if (x[2] <= 550.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 113.5) {
                                        if (x[2] <= 349.5) {
                                            if (x[3] <= 29.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 557.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #41
                        if (x[2] <= 431.0) {
                            if (x[2] <= 329.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 4.5) {
                                    if (x[0] <= 1.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 54.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 2.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 65.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 515.0) {
                                if (x[1] <= 74.0) {
                                    if (x[1] <= 5.5) {
                                        if (x[0] <= 2.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            if (x[0] <= 0.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 48.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 17.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 445.0) {
                                        if (x[1] <= 117.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 80.5) {
                                            if (x[0] <= 2.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 469.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[2] <= 675.0) {
                                        if (x[3] <= 29.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 24.0) {
                                            if (x[2] <= 735.0) {
                                                if (x[2] <= 695.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 117.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 125.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #42
                        if (x[2] <= 346.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 492.0) {
                                if (x[0] <= 1.5) {
                                    if (x[3] <= 22.5) {
                                        if (x[3] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 18.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 119.5) {
                                            if (x[3] <= 28.5) {
                                                if (x[2] <= 434.0) {
                                                    if (x[1] <= 21.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 27.0) {
                                                            if (x[1] <= 85.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= 5.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 23.5) {
                                    if (x[0] <= 0.5) {
                                        if (x[2] <= 825.0) {
                                            if (x[3] <= 22.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 48.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 730.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 955.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3.5) {
                                            if (x[2] <= 563.5) {
                                                if (x[3] <= 20.5) {
                                                    if (x[1] <= 72.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 674.0) {
                                        if (x[2] <= 665.0) {
                                            if (x[0] <= 0.5) {
                                                if (x[3] <= 32.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #43
                        if (x[1] <= 1.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[3] <= 19.5) {
                                if (x[2] <= 502.5) {
                                    if (x[2] <= 439.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 3.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 76.0) {
                                                if (x[3] <= 18.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 689.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 349.5) {
                                    if (x[2] <= 329.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 9.0) {
                                            if (x[3] <= 27.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 114.0) {
                                        if (x[1] <= 6.5) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 453.0) {
                                                if (x[1] <= 40.5) {
                                                    if (x[3] <= 22.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 23.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 427.5) {
                                                                if (x[0] <= 1.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 444.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[3] <= 25.5) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 27.0) {
                                                        if (x[0] <= 2.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1.5) {
                                                    if (x[2] <= 649.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 669.0) {
                                                            if (x[3] <= 22.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 193.0) {
                                            if (x[2] <= 674.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #44
                        if (x[1] <= 1.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[2] <= 459.5) {
                                if (x[2] <= 334.5) {
                                    if (x[1] <= 7.5) {
                                        if (x[1] <= 6.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 456.5) {
                                        if (x[3] <= 28.5) {
                                            if (x[2] <= 417.5) {
                                                if (x[0] <= 4.5) {
                                                    if (x[3] <= 24.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 390.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 2.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 38.0) {
                                                    if (x[0] <= 2.0) {
                                                        if (x[2] <= 441.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 19.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 23.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 5.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[2] <= 680.0) {
                                        if (x[2] <= 585.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 625.0) {
                                                if (x[1] <= 49.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 600.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 135.0) {
                                            if (x[3] <= 20.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 710.0) {
                                                    if (x[3] <= 24.0) {
                                                        if (x[3] <= 22.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 468.5) {
                                        if (x[3] <= 20.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 563.5) {
                                            if (x[1] <= 110.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #45
                        if (x[2] <= 492.0) {
                            if (x[1] <= 2.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 349.5) {
                                    if (x[0] <= 3.5) {
                                        if (x[2] <= 330.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 339.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 21.0) {
                                        if (x[0] <= 1.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 4.5) {
                                                if (x[2] <= 354.0) {
                                                    if (x[1] <= 54.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 21.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 439.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 20.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 122.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 0.5) {
                                if (x[1] <= 23.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 23.5) {
                                        if (x[3] <= 22.5) {
                                            if (x[1] <= 57.0) {
                                                if (x[3] <= 20.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 685.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 563.5) {
                                    if (x[1] <= 110.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #46
                        if (x[2] <= 417.5) {
                            if (x[0] <= 4.5) {
                                if (x[2] <= 325.5) {
                                    if (x[3] <= 29.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 2.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 31.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 104.0) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 83.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 21.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 118.5) {
                                if (x[0] <= 1.5) {
                                    if (x[2] <= 669.0) {
                                        if (x[1] <= 101.0) {
                                            if (x[3] <= 22.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 20.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 15.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 468.5) {
                                        if (x[3] <= 20.0) {
                                            if (x[1] <= 71.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 179.0) {
                                    if (x[2] <= 619.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #47
                        if (x[2] <= 394.5) {
                            if (x[3] <= 29.5) {
                                if (x[1] <= 14.0) {
                                    if (x[2] <= 345.0) {
                                        if (x[2] <= 325.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 9.0) {
                                                if (x[1] <= 5.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 8.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 349.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            if (x[1] <= 78.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 334.5) {
                                        if (x[3] <= 31.0) {
                                            if (x[1] <= 33.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 0.5) {
                                if (x[3] <= 21.5) {
                                    if (x[1] <= 50.0) {
                                        if (x[1] <= 25.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 685.0) {
                                        if (x[1] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 37.5) {
                                                if (x[3] <= 34.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 112.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 23.5) {
                                            if (x[2] <= 735.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 17.5) {
                                    if (x[1] <= 23.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 92.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 39.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 42.0) {
                                            if (x[0] <= 5.0) {
                                                if (x[1] <= 40.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 472.5) {
                                                if (x[0] <= 1.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 453.0) {
                                                        if (x[1] <= 125.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 458.5) {
                                                            if (x[3] <= 30.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 115.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 89.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #48
                        if (x[2] <= 343.5) {
                            if (x[3] <= 28.5) {
                                if (x[2] <= 325.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 24.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 45.5) {
                                    if (x[1] <= 20.5) {
                                        if (x[1] <= 2.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 515.0) {
                                if (x[3] <= 19.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 453.5) {
                                        if (x[1] <= 22.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 105.0) {
                                                if (x[0] <= 2.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 349.5) {
                                                        if (x[3] <= 30.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 25.5) {
                                                            if (x[0] <= 6.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 21.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 462.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 6.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 0.5) {
                                        if (x[2] <= 680.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 20.5) {
                                            if (x[0] <= 3.5) {
                                                if (x[2] <= 554.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 617.5) {
                                                        if (x[1] <= 109.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #49
                        if (x[1] <= 1.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[2] <= 431.0) {
                                if (x[2] <= 349.5) {
                                    if (x[3] <= 28.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 3.5) {
                                            if (x[2] <= 318.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 29.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 82.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 515.0) {
                                    if (x[1] <= 95.0) {
                                        if (x[3] <= 18.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 1.5) {
                                                if (x[3] <= 23.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 0.5) {
                                        if (x[3] <= 23.5) {
                                            if (x[2] <= 735.0) {
                                                if (x[3] <= 22.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 117.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 608.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #50
                        if (x[1] <= 1.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[2] <= 349.5) {
                                if (x[3] <= 24.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 7.5) {
                                        if (x[2] <= 265.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    if (x[3] <= 21.5) {
                                        if (x[3] <= 20.5) {
                                            if (x[2] <= 676.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 649.5) {
                                            if (x[3] <= 22.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 23.5) {
                                                if (x[2] <= 955.0) {
                                                    if (x[2] <= 735.0) {
                                                        if (x[1] <= 25.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 669.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 472.5) {
                                        if (x[0] <= 4.5) {
                                            if (x[3] <= 17.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 434.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 456.5) {
                                                    if (x[3] <= 19.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 137.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 564.0) {
                                            if (x[2] <= 557.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 109.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #51
                        if (x[3] <= 29.5) {
                            if (x[2] <= 434.0) {
                                if (x[0] <= 4.5) {
                                    if (x[3] <= 28.5) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 9.5) {
                                                if (x[1] <= 8.0) {
                                                    if (x[2] <= 290.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 19.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 305.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3.5) {
                                            if (x[2] <= 275.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 41.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[3] <= 23.5) {
                                        if (x[2] <= 680.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 55.5) {
                                                if (x[2] <= 750.0) {
                                                    if (x[3] <= 20.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 22.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 890.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 42.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 488.0) {
                                        if (x[1] <= 43.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 444.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 28.5) {
                                                    if (x[1] <= 75.0) {
                                                        if (x[3] <= 18.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 21.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 5.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 4.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 6.5) {
                                if (x[0] <= 1.5) {
                                    if (x[3] <= 40.5) {
                                        if (x[2] <= 600.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 31.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 290.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 156.0) {
                                    if (x[2] <= 564.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #52
                        if (x[2] <= 468.5) {
                            if (x[2] <= 343.5) {
                                if (x[2] <= 299.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 28.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 45.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 111.5) {
                                    if (x[0] <= 1.5) {
                                        if (x[1] <= 22.0) {
                                            if (x[2] <= 431.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            if (x[2] <= 349.5) {
                                                if (x[2] <= 348.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 17.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 5.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 18.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 420.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 0.5) {
                                if (x[3] <= 20.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 22.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 140.5) {
                                            if (x[3] <= 23.5) {
                                                if (x[1] <= 77.0) {
                                                    if (x[2] <= 650.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2.5) {
                                    if (x[1] <= 113.0) {
                                        if (x[2] <= 492.0) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #53
                        if (x[2] <= 435.0) {
                            if (x[3] <= 34.5) {
                                if (x[2] <= 334.5) {
                                    if (x[1] <= 7.5) {
                                        if (x[0] <= 3.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 23.5) {
                                        if (x[1] <= 24.0) {
                                            if (x[0] <= 1.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 28.5) {
                                                if (x[0] <= 5.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 15.5) {
                                if (x[2] <= 506.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 117.0) {
                                    if (x[1] <= 6.5) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 492.0) {
                                            if (x[0] <= 2.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 18.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 0.5) {
                                                if (x[1] <= 22.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 20.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 674.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 923.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #54
                        if (x[3] <= 29.5) {
                            if (x[3] <= 17.5) {
                                if (x[2] <= 499.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 118.5) {
                                    if (x[2] <= 375.0) {
                                        if (x[1] <= 99.0) {
                                            if (x[2] <= 329.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 1.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 19.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 4.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 345.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 353.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 509.5) {
                                            if (x[0] <= 1.5) {
                                                if (x[1] <= 35.5) {
                                                    if (x[3] <= 22.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 20.0) {
                                                    if (x[1] <= 37.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 4.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 42.0) {
                                                    if (x[3] <= 22.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 624.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 1.5) {
                                if (x[3] <= 37.5) {
                                    if (x[3] <= 32.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 32.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 76.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 49.5) {
                                    if (x[1] <= 36.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 274.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 338.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 468.5) {
                                            if (x[1] <= 120.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #55
                        if (x[0] <= 4.5) {
                            if (x[3] <= 29.5) {
                                if (x[2] <= 365.0) {
                                    if (x[2] <= 315.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 2.5) {
                                                if (x[1] <= 38.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 128.5) {
                                        if (x[0] <= 1.5) {
                                            if (x[2] <= 625.0) {
                                                if (x[2] <= 441.0) {
                                                    if (x[3] <= 22.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 19.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 669.0) {
                                                        if (x[1] <= 42.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 14.0) {
                                    if (x[3] <= 31.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 2.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 334.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 478.5) {
                                if (x[2] <= 440.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 7.5) {
                                        if (x[1] <= 71.0) {
                                            if (x[3] <= 17.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #56
                        if (x[3] <= 29.5) {
                            if (x[1] <= 2.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 18.5) {
                                    if (x[1] <= 36.5) {
                                        if (x[2] <= 448.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 14.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 87.0) {
                                                if (x[2] <= 503.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 3.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 493.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 135.0) {
                                        if (x[2] <= 431.0) {
                                            if (x[0] <= 4.5) {
                                                if (x[2] <= 325.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 30.0) {
                                                        if (x[1] <= 5.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 1.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 665.0) {
                                                if (x[3] <= 22.5) {
                                                    if (x[2] <= 454.5) {
                                                        if (x[1] <= 50.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 3.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 95.0) {
                                                        if (x[0] <= 2.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 21.5) {
                                                    if (x[2] <= 689.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 20.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 750.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 622.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 883.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 6.5) {
                                if (x[2] <= 322.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 14.0) {
                                        if (x[2] <= 480.0) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 415.0) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 567.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #57
                        if (x[0] <= 6.5) {
                            if (x[0] <= 1.5) {
                                if (x[2] <= 585.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 710.0) {
                                        if (x[1] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 600.5) {
                                                if (x[3] <= 31.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 52.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 22.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 29.5) {
                                    if (x[3] <= 17.5) {
                                        if (x[2] <= 505.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 24.5) {
                                            if (x[2] <= 330.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 115.5) {
                                                    if (x[0] <= 3.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 493.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3.5) {
                                                if (x[1] <= 41.5) {
                                                    if (x[2] <= 240.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 63.5) {
                                                    if (x[0] <= 5.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 26.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 325.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 265.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 474.0) {
                                if (x[3] <= 20.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 27.5) {
                                        if (x[1] <= 34.0) {
                                            if (x[2] <= 330.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 7.5) {
                                                if (x[1] <= 95.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #58
                        if (x[1] <= 165.0) {
                            if (x[3] <= 29.5) {
                                if (x[3] <= 17.5) {
                                    if (x[3] <= 14.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 17.5) {
                                            if (x[1] <= 12.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 556.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 77.5) {
                                        if (x[2] <= 349.0) {
                                            if (x[3] <= 28.5) {
                                                if (x[1] <= 7.5) {
                                                    if (x[3] <= 23.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 290.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 453.0) {
                                                if (x[1] <= 31.0) {
                                                    if (x[0] <= 1.0) {
                                                        if (x[3] <= 22.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 27.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 6.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 28.0) {
                                                        if (x[3] <= 22.5) {
                                                            if (x[1] <= 50.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 19.5) {
                                                                    if (x[1] <= 57.5) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 57.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 65.5) {
                                                                    if (x[2] <= 724.5) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 72.0) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 4.0) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 509.5) {
                                            if (x[2] <= 345.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 453.5) {
                                                    if (x[1] <= 82.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 415.0) {
                                                            if (x[0] <= 2.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 117.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 125.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 334.5) {
                                    if (x[2] <= 265.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 3.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        if (x[2] <= 550.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 34.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 112.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 6.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 558.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 34.5) {
                                if (x[3] <= 27.5) {
                                    if (x[3] <= 23.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #59
                        if (x[3] <= 29.5) {
                            if (x[3] <= 18.5) {
                                if (x[2] <= 494.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 462.0) {
                                    if (x[2] <= 347.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 24.5) {
                                                if (x[1] <= 68.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 6.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 25.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 53.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 5.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 955.0) {
                                        if (x[3] <= 28.5) {
                                            if (x[1] <= 106.0) {
                                                if (x[1] <= 65.5) {
                                                    if (x[1] <= 53.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 1.5) {
                                                            if (x[1] <= 58.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 22.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 608.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 719.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 23.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 265.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 150.0) {
                                    if (x[2] <= 334.5) {
                                        if (x[0] <= 3.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            if (x[1] <= 19.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 567.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #60
                        if (x[3] <= 29.5) {
                            if (x[2] <= 394.5) {
                                if (x[2] <= 349.5) {
                                    if (x[2] <= 325.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 24.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 339.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 23.0) {
                                        if (x[1] <= 8.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 25.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 83.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 473.5) {
                                    if (x[1] <= 37.5) {
                                        if (x[0] <= 1.5) {
                                            if (x[3] <= 22.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 19.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 119.5) {
                                                    if (x[2] <= 415.0) {
                                                        if (x[1] <= 66.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 118.5) {
                                        if (x[2] <= 599.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 6.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 0.5) {
                                                    if (x[2] <= 675.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 710.0) {
                                                            if (x[3] <= 20.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 176.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 34.5) {
                                if (x[2] <= 265.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        if (x[2] <= 600.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 168.0) {
                                            if (x[1] <= 117.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 564.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #61
                        if (x[2] <= 374.5) {
                            if (x[1] <= 2.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 325.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 27.0) {
                                        if (x[0] <= 4.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 4.0) {
                                            if (x[2] <= 348.0) {
                                                if (x[1] <= 53.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 31.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 15.5) {
                                if (x[2] <= 506.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 492.0) {
                                    if (x[1] <= 46.5) {
                                        if (x[0] <= 1.0) {
                                            if (x[3] <= 22.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 415.0) {
                                                if (x[3] <= 29.0) {
                                                    if (x[2] <= 390.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 20.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 65.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 453.5) {
                                                if (x[1] <= 127.0) {
                                                    if (x[0] <= 1.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 80.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 0.5) {
                                        if (x[2] <= 685.0) {
                                            if (x[1] <= 90.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 635.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 825.0) {
                                                if (x[1] <= 17.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 725.0) {
                                                        if (x[1] <= 46.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #62
                        if (x[1] <= 1.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[3] <= 29.5) {
                                if (x[2] <= 479.0) {
                                    if (x[2] <= 349.5) {
                                        if (x[1] <= 8.0) {
                                            if (x[1] <= 5.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 290.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 23.5) {
                                            if (x[0] <= 2.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 449.5) {
                                                if (x[2] <= 353.0) {
                                                    if (x[1] <= 83.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 453.0) {
                                                    if (x[1] <= 126.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 6.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 458.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 24.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 22.5) {
                                        if (x[2] <= 793.0) {
                                            if (x[1] <= 117.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 4.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 825.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 23.5) {
                                            if (x[1] <= 45.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 57.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 74.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 88.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 91.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    if (x[2] <= 685.0) {
                                        if (x[2] <= 550.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 37.5) {
                                                if (x[1] <= 112.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 334.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 6.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 568.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #63
                        if (x[3] <= 29.5) {
                            if (x[2] <= 431.0) {
                                if (x[1] <= 2.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 4.5) {
                                        if (x[1] <= 92.5) {
                                            if (x[0] <= 2.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 295.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 360.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 493.0) {
                                    if (x[1] <= 43.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 71.0) {
                                            if (x[3] <= 18.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 6.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 25.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 0.5) {
                                        if (x[3] <= 22.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 55.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 20.5) {
                                            if (x[2] <= 555.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 563.5) {
                                                    if (x[3] <= 19.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 6.5) {
                                if (x[0] <= 1.5) {
                                    if (x[2] <= 685.0) {
                                        if (x[2] <= 512.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 37.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 261.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 334.5) {
                                            if (x[1] <= 33.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 30.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 183.0) {
                                        if (x[1] <= 180.0) {
                                            if (x[2] <= 568.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #64
                        if (x[2] <= 459.5) {
                            if (x[2] <= 343.5) {
                                if (x[3] <= 28.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 275.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 5.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 4.5) {
                                    if (x[3] <= 24.5) {
                                        if (x[2] <= 449.0) {
                                            if (x[0] <= 1.5) {
                                                if (x[1] <= 19.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 416.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 454.5) {
                                            if (x[2] <= 432.5) {
                                                if (x[0] <= 1.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 17.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 101.0) {
                                            if (x[2] <= 420.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 19.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 5.5) {
                                if (x[1] <= 3.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[2] <= 675.0) {
                                        if (x[3] <= 29.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 140.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #65
                        if (x[3] <= 29.5) {
                            if (x[2] <= 434.0) {
                                if (x[1] <= 14.0) {
                                    if (x[1] <= 12.0) {
                                        if (x[2] <= 325.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 28.5) {
                                        if (x[2] <= 349.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 25.5) {
                                                if (x[3] <= 24.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 378.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 5.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 83.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 37.5) {
                                            if (x[2] <= 239.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 493.0) {
                                    if (x[1] <= 68.0) {
                                        if (x[3] <= 23.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 2.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 22.5) {
                                            if (x[0] <= 6.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 0.5) {
                                        if (x[3] <= 22.5) {
                                            if (x[1] <= 57.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 710.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 890.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 23.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 117.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 125.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 6.5) {
                                if (x[0] <= 1.5) {
                                    if (x[2] <= 550.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 340.0) {
                                        if (x[2] <= 255.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 3.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 584.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #66
                        if (x[2] <= 343.5) {
                            if (x[2] <= 329.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 24.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 45.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 97.0) {
                                    if (x[2] <= 669.0) {
                                        if (x[2] <= 651.0) {
                                            if (x[1] <= 22.0) {
                                                if (x[2] <= 466.0) {
                                                    if (x[1] <= 19.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 656.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 674.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 24.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 472.5) {
                                    if (x[3] <= 21.5) {
                                        if (x[1] <= 14.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 6.5) {
                                            if (x[1] <= 39.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 41.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 27.5) {
                                                if (x[1] <= 47.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #67
                        if (x[3] <= 18.5) {
                            if (x[3] <= 14.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 3.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 14.0) {
                                        if (x[1] <= 6.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 17.5) {
                                                if (x[1] <= 11.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 558.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 349.5) {
                                if (x[1] <= 2.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 329.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 27.0) {
                                            if (x[1] <= 24.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 515.0) {
                                    if (x[1] <= 111.5) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 38.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 4.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 21.5) {
                                                        if (x[0] <= 6.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 23.5) {
                                        if (x[3] <= 22.5) {
                                            if (x[2] <= 790.0) {
                                                if (x[2] <= 563.5) {
                                                    if (x[0] <= 4.5) {
                                                        if (x[1] <= 109.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 45.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 669.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 875.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #68
                        if (x[2] <= 439.5) {
                            if (x[2] <= 334.5) {
                                if (x[2] <= 329.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 28.5) {
                                        if (x[3] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 5.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 105.0) {
                                    if (x[3] <= 23.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 5.0) {
                                            if (x[1] <= 17.5) {
                                                if (x[3] <= 30.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 91.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 25.5) {
                                                        if (x[0] <= 2.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 26.5) {
                                if (x[1] <= 117.5) {
                                    if (x[0] <= 0.5) {
                                        if (x[1] <= 55.5) {
                                            if (x[3] <= 20.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 675.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 474.0) {
                                            if (x[0] <= 6.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 162.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 34.5) {
                                    if (x[0] <= 2.0) {
                                        if (x[1] <= 90.5) {
                                            if (x[3] <= 33.5) {
                                                if (x[2] <= 663.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 459.5) {
                                            if (x[0] <= 6.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #69
                        if (x[3] <= 18.5) {
                            if (x[3] <= 14.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 9.0) {
                                    if (x[2] <= 434.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 498.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 492.0) {
                                if (x[3] <= 29.5) {
                                    if (x[2] <= 329.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 4.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 7.5) {
                                                    if (x[1] <= 68.0) {
                                                        if (x[1] <= 47.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 39.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 340.0) {
                                        if (x[3] <= 30.5) {
                                            if (x[1] <= 33.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 117.0) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 955.0) {
                                    if (x[0] <= 0.5) {
                                        if (x[2] <= 725.0) {
                                            if (x[1] <= 65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 24.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 20.5) {
                                            if (x[1] <= 117.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 4.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 985.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #70
                        if (x[1] <= 28.5) {
                            if (x[2] <= 325.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 369.5) {
                                    if (x[1] <= 6.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            if (x[3] <= 23.0) {
                                                if (x[3] <= 20.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        if (x[1] <= 6.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 0.5) {
                                                if (x[1] <= 19.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 551.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 33.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 36.5) {
                                    if (x[3] <= 17.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 32.5) {
                                            if (x[2] <= 400.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 469.5) {
                                        if (x[2] <= 334.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 32.5) {
                                                if (x[1] <= 100.0) {
                                                    if (x[1] <= 89.0) {
                                                        if (x[3] <= 27.0) {
                                                            if (x[0] <= 6.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 390.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 448.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 118.5) {
                                            if (x[0] <= 0.5) {
                                                if (x[3] <= 23.5) {
                                                    if (x[3] <= 22.5) {
                                                        if (x[2] <= 790.0) {
                                                            if (x[3] <= 20.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 78.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 24.0) {
                                                if (x[1] <= 185.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #71
                        if (x[2] <= 349.5) {
                            if (x[1] <= 7.5) {
                                if (x[0] <= 3.5) {
                                    if (x[0] <= 2.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 83.0) {
                                if (x[0] <= 0.5) {
                                    if (x[3] <= 21.5) {
                                        if (x[1] <= 26.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 20.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 13.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 32.0) {
                                                if (x[2] <= 416.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 459.5) {
                                        if (x[2] <= 456.5) {
                                            if (x[0] <= 4.5) {
                                                if (x[0] <= 1.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 30.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 580.5) {
                                    if (x[2] <= 353.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 95.0) {
                                            if (x[1] <= 85.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 18.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 23.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 2.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 915.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 140.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #72
                        if (x[2] <= 431.0) {
                            if (x[2] <= 329.5) {
                                if (x[2] <= 299.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 3.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 3.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 24.0) {
                                    if (x[1] <= 21.5) {
                                        if (x[3] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 5.0) {
                                        if (x[0] <= 2.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 492.0) {
                                if (x[0] <= 2.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 4.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 53.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 26.0) {
                                                if (x[2] <= 453.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 6.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 34.5) {
                                        if (x[1] <= 118.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 25.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 112.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 151.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #73
                        if (x[2] <= 349.5) {
                            if (x[1] <= 2.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 3.5) {
                                    if (x[0] <= 2.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 284.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 488.0) {
                                if (x[3] <= 18.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        if (x[3] <= 22.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 30.5) {
                                                if (x[1] <= 102.0) {
                                                    if (x[0] <= 5.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[2] <= 685.0) {
                                        if (x[3] <= 34.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 635.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 17.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 113.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 131.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #74
                        if (x[1] <= 1.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[3] <= 29.5) {
                                if (x[2] <= 473.5) {
                                    if (x[1] <= 28.0) {
                                        if (x[2] <= 347.5) {
                                            if (x[2] <= 325.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 15.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 5.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 24.5) {
                                                if (x[0] <= 1.5) {
                                                    if (x[3] <= 22.5) {
                                                        if (x[2] <= 391.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 21.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            if (x[2] <= 349.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 1.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 435.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 60.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 24.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 22.5) {
                                        if (x[1] <= 117.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 673.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 23.5) {
                                            if (x[2] <= 669.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 121.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 28.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 334.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 114.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 674.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #75
                        if (x[3] <= 29.5) {
                            if (x[3] <= 19.5) {
                                if (x[1] <= 15.0) {
                                    if (x[1] <= 12.0) {
                                        if (x[2] <= 435.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 97.0) {
                                        if (x[2] <= 444.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 498.5) {
                                                if (x[0] <= 6.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 18.5) {
                                            if (x[2] <= 524.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 431.0) {
                                    if (x[1] <= 14.0) {
                                        if (x[0] <= 3.5) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 25.5) {
                                                if (x[1] <= 11.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 385.0) {
                                            if (x[1] <= 25.5) {
                                                if (x[3] <= 28.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 239.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 53.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 1.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 479.0) {
                                        if (x[1] <= 63.5) {
                                            if (x[2] <= 462.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 4.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 107.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 0.5) {
                                            if (x[2] <= 690.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 138.5) {
                                                    if (x[3] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 19.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 685.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 284.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 150.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 568.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #76
                        if (x[3] <= 29.5) {
                            if (x[3] <= 16.5) {
                                if (x[1] <= 17.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 493.0) {
                                    if (x[2] <= 394.5) {
                                        if (x[1] <= 14.0) {
                                            if (x[1] <= 12.0) {
                                                if (x[2] <= 325.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 27.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 325.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 28.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 20.0) {
                                            if (x[1] <= 68.0) {
                                                if (x[2] <= 454.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 119.5) {
                                                    if (x[1] <= 51.5) {
                                                        if (x[2] <= 419.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 23.5) {
                                        if (x[3] <= 22.5) {
                                            if (x[0] <= 0.5) {
                                                if (x[2] <= 790.0) {
                                                    if (x[1] <= 50.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 20.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 117.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 673.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 669.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 689.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 143.0) {
                                if (x[2] <= 265.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 15.5) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            if (x[2] <= 500.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 334.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 120.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 564.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 568.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #77
                        if (x[2] <= 469.5) {
                            if (x[3] <= 29.5) {
                                if (x[2] <= 434.0) {
                                    if (x[3] <= 28.5) {
                                        if (x[1] <= 10.5) {
                                            if (x[3] <= 24.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 24.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 378.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 67.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 282.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 4.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 39.5) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 453.0) {
                                                if (x[3] <= 19.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 126.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 5.5) {
                                    if (x[2] <= 265.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 33.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 5.5) {
                                if (x[3] <= 26.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 2.5) {
                                    if (x[1] <= 118.0) {
                                        if (x[2] <= 585.0) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 19.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 77.0) {
                                                    if (x[1] <= 60.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 825.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #78
                        if (x[3] <= 29.5) {
                            if (x[2] <= 431.0) {
                                if (x[1] <= 7.5) {
                                    if (x[3] <= 23.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 28.5) {
                                        if (x[1] <= 20.0) {
                                            if (x[1] <= 18.0) {
                                                if (x[3] <= 20.5) {
                                                    if (x[2] <= 290.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 24.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 378.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 66.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 2.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 275.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 22.5) {
                                    if (x[1] <= 6.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 462.0) {
                                            if (x[3] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 488.0) {
                                        if (x[2] <= 456.5) {
                                            if (x[1] <= 66.5) {
                                                if (x[0] <= 2.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 23.5) {
                                            if (x[1] <= 48.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 890.0) {
                                                    if (x[0] <= 4.0) {
                                                        if (x[2] <= 715.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 28.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 0.5) {
                                                    if (x[1] <= 67.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 112.5) {
                                if (x[1] <= 15.5) {
                                    if (x[1] <= 2.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 32.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 286.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 674.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #79
                        if (x[2] <= 431.0) {
                            if (x[3] <= 37.5) {
                                if (x[2] <= 346.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 21.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 11.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 22.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 29.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 39.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 492.0) {
                                if (x[1] <= 41.5) {
                                    if (x[3] <= 25.5) {
                                        if (x[1] <= 21.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 456.5) {
                                        if (x[0] <= 2.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 123.0) {
                                                if (x[1] <= 50.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 6.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 117.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 915.0) {
                                    if (x[1] <= 118.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 3.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 27.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #80
                        if (x[1] <= 155.0) {
                            if (x[2] <= 431.0) {
                                if (x[2] <= 349.5) {
                                    if (x[3] <= 28.5) {
                                        if (x[2] <= 329.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 24.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 4.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 30.5) {
                                            if (x[2] <= 334.5) {
                                                if (x[1] <= 37.5) {
                                                    if (x[1] <= 16.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 362.5) {
                                        if (x[3] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 6.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 37.0) {
                                            if (x[1] <= 11.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 29.0) {
                                                    if (x[1] <= 22.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 469.5) {
                                    if (x[1] <= 52.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 2.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 4.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 71.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 20.0) {
                                        if (x[0] <= 0.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2.5) {
                                            if (x[3] <= 20.5) {
                                                if (x[2] <= 687.5) {
                                                    if (x[1] <= 109.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 568.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 923.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #81
                        if (x[3] <= 29.5) {
                            if (x[2] <= 431.0) {
                                if (x[2] <= 349.5) {
                                    if (x[3] <= 28.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 3.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 15.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 98.0) {
                                            if (x[3] <= 27.5) {
                                                if (x[1] <= 21.5) {
                                                    if (x[0] <= 1.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 113.5) {
                                                if (x[1] <= 105.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 21.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 57.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 514.5) {
                                        if (x[0] <= 6.0) {
                                            if (x[0] <= 2.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 454.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 119.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 0.5) {
                                            if (x[1] <= 77.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 930.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 338.5) {
                                if (x[2] <= 265.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 303.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 455.0) {
                                    if (x[1] <= 120.0) {
                                        if (x[3] <= 32.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 4.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            if (x[3] <= 34.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 112.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #82
                        if (x[3] <= 29.5) {
                            if (x[2] <= 494.5) {
                                if (x[1] <= 34.5) {
                                    if (x[2] <= 349.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 431.0) {
                                            if (x[1] <= 21.5) {
                                                if (x[2] <= 405.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 349.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 25.5) {
                                            if (x[1] <= 85.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 111.5) {
                                                    if (x[1] <= 110.5) {
                                                        if (x[2] <= 435.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 454.0) {
                                                if (x[2] <= 375.0) {
                                                    if (x[1] <= 83.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 20.0) {
                                    if (x[0] <= 0.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 955.0) {
                                        if (x[0] <= 0.5) {
                                            if (x[2] <= 635.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 143.0) {
                                if (x[2] <= 338.5) {
                                    if (x[1] <= 4.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        if (x[2] <= 550.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 165.0) {
                                    if (x[3] <= 30.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 31.5) {
                                        if (x[3] <= 30.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 180.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #83
                        if (x[2] <= 334.5) {
                            if (x[1] <= 2.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 325.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 23.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 17.5) {
                                if (x[2] <= 504.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 488.0) {
                                    if (x[1] <= 113.5) {
                                        if (x[0] <= 1.5) {
                                            if (x[3] <= 22.5) {
                                                if (x[2] <= 416.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 441.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 4.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 27.5) {
                                                    if (x[2] <= 434.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 0.5) {
                                        if (x[2] <= 685.0) {
                                            if (x[3] <= 37.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 15.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 710.0) {
                                                    if (x[1] <= 50.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 60.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 140.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #84
                        if (x[2] <= 349.5) {
                            if (x[1] <= 2.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 329.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 4.0) {
                                        if (x[3] <= 31.0) {
                                            if (x[3] <= 24.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 29.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 519.0) {
                                if (x[3] <= 18.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 5.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 101.0) {
                                                if (x[2] <= 419.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[2] <= 680.0) {
                                        if (x[3] <= 37.5) {
                                            if (x[3] <= 32.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 112.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 24.0) {
                                            if (x[2] <= 955.0) {
                                                if (x[1] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #85
                        if (x[3] <= 29.5) {
                            if (x[2] <= 434.0) {
                                if (x[1] <= 9.5) {
                                    if (x[1] <= 8.5) {
                                        if (x[1] <= 2.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 23.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 5.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 394.5) {
                                        if (x[1] <= 26.0) {
                                            if (x[0] <= 3.5) {
                                                if (x[1] <= 17.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 24.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 27.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            if (x[1] <= 58.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 28.5) {
                                    if (x[0] <= 1.5) {
                                        if (x[2] <= 625.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 138.5) {
                                                if (x[1] <= 57.0) {
                                                    if (x[1] <= 52.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 694.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 608.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 4.0) {
                                        if (x[2] <= 699.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 98.0) {
                                if (x[3] <= 31.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 285.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 529.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 674.0) {
                                        if (x[2] <= 635.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #86
                        if (x[1] <= 1.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[2] <= 343.5) {
                                if (x[2] <= 329.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 4.0) {
                                        if (x[0] <= 2.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 53.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 459.5) {
                                    if (x[1] <= 105.0) {
                                        if (x[1] <= 22.5) {
                                            if (x[0] <= 1.0) {
                                                if (x[1] <= 17.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 20.0) {
                                                    if (x[3] <= 17.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 6.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 7.5) {
                                                        if (x[1] <= 32.0) {
                                                            if (x[3] <= 34.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 6.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 118.0) {
                                            if (x[0] <= 1.5) {
                                                if (x[1] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 669.0) {
                                                        if (x[3] <= 32.5) {
                                                            if (x[0] <= 0.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 568.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 20.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 4.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #87
                        if (x[2] <= 431.0) {
                            if (x[2] <= 349.5) {
                                if (x[2] <= 329.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 29.5) {
                                        if (x[1] <= 9.0) {
                                            if (x[0] <= 4.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 4.5) {
                                    if (x[0] <= 1.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 2.5) {
                                            if (x[3] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 1.5) {
                                if (x[2] <= 674.0) {
                                    if (x[1] <= 58.5) {
                                        if (x[1] <= 13.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 32.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 610.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 17.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 135.0) {
                                            if (x[2] <= 730.0) {
                                                if (x[3] <= 20.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 462.0) {
                                    if (x[1] <= 79.0) {
                                        if (x[1] <= 50.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 55.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 25.0) {
                                            if (x[0] <= 6.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #88
                        if (x[2] <= 394.5) {
                            if (x[2] <= 329.5) {
                                if (x[3] <= 29.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 2.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 29.0) {
                                    if (x[1] <= 21.5) {
                                        if (x[2] <= 347.5) {
                                            if (x[3] <= 24.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 515.0) {
                                if (x[0] <= 1.5) {
                                    if (x[2] <= 431.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 23.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 4.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 35.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 94.0) {
                                                if (x[2] <= 440.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[3] <= 20.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 22.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 23.5) {
                                                if (x[1] <= 121.0) {
                                                    if (x[1] <= 29.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 685.0) {
                                                        if (x[2] <= 635.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #89
                        if (x[3] <= 29.5) {
                            if (x[3] <= 18.5) {
                                if (x[0] <= 3.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 498.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 375.0) {
                                    if (x[0] <= 4.5) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 325.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 135.0) {
                                        if (x[0] <= 1.5) {
                                            if (x[2] <= 649.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                if (x[2] <= 412.5) {
                                                    if (x[0] <= 5.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 113.5) {
                                                    if (x[2] <= 568.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 21.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 3.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 169.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 101.0) {
                                if (x[0] <= 1.5) {
                                    if (x[3] <= 31.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 600.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 38.5) {
                                        if (x[1] <= 31.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 360.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 30.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 31.5) {
                                        if (x[2] <= 564.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 165.0) {
                                            if (x[2] <= 679.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 34.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #90
                        if (x[2] <= 334.5) {
                            if (x[2] <= 329.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 25.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 14.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 492.0) {
                                if (x[3] <= 25.5) {
                                    if (x[0] <= 1.5) {
                                        if (x[3] <= 22.5) {
                                            if (x[1] <= 25.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 18.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 101.5) {
                                                if (x[3] <= 20.0) {
                                                    if (x[2] <= 439.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 5.0) {
                                        if (x[1] <= 89.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 2.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 20.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 15.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 24.0) {
                                            if (x[3] <= 22.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 730.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 108.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 685.0) {
                                                if (x[2] <= 635.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2.5) {
                                        if (x[3] <= 20.5) {
                                            if (x[1] <= 109.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #91
                        if (x[3] <= 29.5) {
                            if (x[3] <= 18.5) {
                                if (x[1] <= 28.0) {
                                    if (x[0] <= 3.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 6.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 97.0) {
                                        if (x[3] <= 16.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 46.5) {
                                                if (x[2] <= 440.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 524.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2.5) {
                                    if (x[2] <= 579.5) {
                                        if (x[1] <= 17.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 514.5) {
                                                if (x[3] <= 21.5) {
                                                    if (x[1] <= 109.5) {
                                                        if (x[0] <= 1.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 379.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 550.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 565.0) {
                                                        if (x[1] <= 109.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 4.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 19.5) {
                                                if (x[1] <= 57.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 669.0) {
                                                    if (x[0] <= 0.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 43.5) {
                                        if (x[1] <= 42.0) {
                                            if (x[0] <= 3.5) {
                                                if (x[2] <= 275.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 7.5) {
                                                    if (x[2] <= 412.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 27.5) {
                                                        if (x[3] <= 24.5) {
                                                            if (x[3] <= 23.5) {
                                                                if (x[2] <= 336.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 361.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 458.5) {
                                            if (x[2] <= 384.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 425.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 5.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 28.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 261.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 334.5) {
                                    if (x[0] <= 3.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 6.5) {
                                        if (x[2] <= 660.0) {
                                            if (x[0] <= 1.5) {
                                                if (x[2] <= 500.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 89.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 34.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 568.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #92
                        if (x[2] <= 375.0) {
                            if (x[2] <= 325.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 4.5) {
                                    if (x[0] <= 2.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 520.0) {
                                if (x[3] <= 18.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 95.0) {
                                        if (x[2] <= 499.0) {
                                            if (x[1] <= 29.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 1.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 20.0) {
                                                        if (x[0] <= 6.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 5.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 420.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 3.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[2] <= 680.0) {
                                        if (x[2] <= 625.0) {
                                            if (x[3] <= 29.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 117.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #93
                        if (x[0] <= 1.5) {
                            if (x[3] <= 31.0) {
                                if (x[1] <= 36.0) {
                                    if (x[1] <= 17.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 391.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 540.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 649.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 20.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 610.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 930.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 13.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 500.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 49.0) {
                                if (x[0] <= 3.5) {
                                    if (x[2] <= 335.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 417.5) {
                                        if (x[1] <= 2.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 349.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 30.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 473.5) {
                                    if (x[2] <= 343.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 21.5) {
                                                if (x[0] <= 6.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 72.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 414.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2.5) {
                                        if (x[1] <= 109.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #94
                        if (x[1] <= 43.5) {
                            if (x[0] <= 7.5) {
                                if (x[1] <= 32.5) {
                                    if (x[3] <= 29.5) {
                                        if (x[2] <= 395.5) {
                                            if (x[2] <= 325.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 4.0) {
                                                    if (x[0] <= 1.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 0.5) {
                                                if (x[2] <= 540.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 28.5) {
                                            if (x[0] <= 1.5) {
                                                if (x[2] <= 600.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 5.0) {
                                                    if (x[0] <= 3.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 36.5) {
                                        if (x[2] <= 430.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 330.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 41.5) {
                                                if (x[1] <= 38.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 369.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 330.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 509.5) {
                                if (x[3] <= 29.5) {
                                    if (x[2] <= 345.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 444.5) {
                                            if (x[0] <= 4.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 98.0) {
                                                    if (x[2] <= 435.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 3.5) {
                                        if (x[2] <= 340.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 33.5) {
                                    if (x[0] <= 0.5) {
                                        if (x[3] <= 22.5) {
                                            if (x[3] <= 20.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 690.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 23.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 112.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #95
                        if (x[2] <= 431.0) {
                            if (x[2] <= 334.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 24.5) {
                                    if (x[1] <= 24.0) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 98.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 4.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 5.0) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 492.0) {
                                if (x[2] <= 453.0) {
                                    if (x[3] <= 30.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 135.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 459.5) {
                                        if (x[2] <= 456.5) {
                                            if (x[0] <= 6.5) {
                                                if (x[1] <= 60.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 23.0) {
                                                if (x[0] <= 6.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 4.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 22.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 794.5) {
                                    if (x[0] <= 0.5) {
                                        if (x[2] <= 680.0) {
                                            if (x[2] <= 625.0) {
                                                if (x[1] <= 14.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 21.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #96
                        if (x[2] <= 375.0) {
                            if (x[3] <= 29.5) {
                                if (x[2] <= 349.5) {
                                    if (x[2] <= 325.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.0) {
                                            if (x[0] <= 2.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 4.5) {
                                        if (x[0] <= 1.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 334.5) {
                                    if (x[2] <= 265.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 303.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 15.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 469.5) {
                                    if (x[0] <= 1.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            if (x[3] <= 20.0) {
                                                if (x[1] <= 19.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 5.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 6.5) {
                                                        if (x[3] <= 27.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 4.5) {
                                        if (x[0] <= 2.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 915.0) {
                                            if (x[0] <= 0.5) {
                                                if (x[2] <= 680.0) {
                                                    if (x[3] <= 37.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 20.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 27.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #97
                        if (x[1] <= 156.0) {
                            if (x[2] <= 462.0) {
                                if (x[3] <= 28.5) {
                                    if (x[1] <= 91.0) {
                                        if (x[3] <= 18.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 7.5) {
                                                if (x[2] <= 315.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 35.5) {
                                                    if (x[0] <= 1.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 335.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 19.5) {
                                                        if (x[1] <= 68.0) {
                                                            if (x[2] <= 313.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 345.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 26.5) {
                                                if (x[3] <= 19.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 375.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 415.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 101.0) {
                                        if (x[0] <= 2.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 3.5) {
                                                if (x[2] <= 275.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 37.5) {
                                                    if (x[2] <= 315.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 23.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 57.0) {
                                            if (x[1] <= 39.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 22.0) {
                                                    if (x[1] <= 50.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 113.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 4.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 568.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 3.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #98
                        if (x[2] <= 435.0) {
                            if (x[3] <= 28.5) {
                                if (x[1] <= 7.0) {
                                    if (x[2] <= 372.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 349.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 21.5) {
                                            if (x[2] <= 405.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 98.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 353.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 2.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 338.5) {
                                            if (x[0] <= 3.5) {
                                                if (x[1] <= 37.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 40.5) {
                                if (x[3] <= 32.5) {
                                    if (x[3] <= 23.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 2.0) {
                                            if (x[1] <= 30.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 13.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2.5) {
                                    if (x[1] <= 118.0) {
                                        if (x[2] <= 579.5) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 667.5) {
                                                if (x[1] <= 74.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 55.5) {
                                                    if (x[0] <= 0.5) {
                                                        if (x[3] <= 20.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 120.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 44.5) {
                                        if (x[3] <= 19.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 498.5) {
                                            if (x[1] <= 102.0) {
                                                if (x[3] <= 18.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #99
                        if (x[3] <= 29.5) {
                            if (x[1] <= 2.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 6.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 431.0) {
                                        if (x[3] <= 24.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 325.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 5.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 73.0) {
                                            if (x[3] <= 28.0) {
                                                if (x[0] <= 1.5) {
                                                    if (x[3] <= 20.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 30.0) {
                                                            if (x[0] <= 0.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 62.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 65.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 18.5) {
                                                        if (x[3] <= 17.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 6.0) {
                                                                if (x[2] <= 528.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 509.5) {
                                                if (x[2] <= 445.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 74.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 23.5) {
                                                        if (x[1] <= 117.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 182.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 260.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 102.5) {
                                    if (x[0] <= 1.5) {
                                        if (x[3] <= 35.5) {
                                            if (x[1] <= 32.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 144.0) {
                                        if (x[0] <= 3.5) {
                                            if (x[1] <= 114.5) {
                                                if (x[2] <= 648.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 165.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 34.5) {
                                                if (x[2] <= 568.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #100
                        if (x[2] <= 345.0) {
                            if (x[1] <= 8.0) {
                                if (x[0] <= 3.5) {
                                    if (x[2] <= 275.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 325.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 4.0) {
                                        if (x[2] <= 335.0) {
                                            if (x[1] <= 45.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 1.5) {
                                if (x[2] <= 674.0) {
                                    if (x[3] <= 22.5) {
                                        if (x[1] <= 49.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 585.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 54.0) {
                                                if (x[3] <= 26.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 624.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 794.5) {
                                        if (x[0] <= 0.5) {
                                            if (x[1] <= 60.5) {
                                                if (x[1] <= 50.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 825.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 140.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 16.5) {
                                    if (x[2] <= 557.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 108.0) {
                                        if (x[2] <= 431.0) {
                                            if (x[0] <= 4.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 75.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 18.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 539.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 2; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }