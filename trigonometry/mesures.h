//
// Created by ANBonin on 20/08/2022.
//

#ifndef MATH_ALGORITHMS_MESURES_H
#define MATH_ALGORITHMS_MESURES_H
#include <iostream>
using namespace std;

template<typename T>
T sameSin(T angle){
    switch (angle) {
        case angle > 0 && angle < 90:
            return 180 - angle;
        case angle > 90 && angle < 270:
            return 180 + angle;
        case angle > 270 && angle < 360:
            return 360 - angle;
        default:
            return NULL;
    }
}

#endif //MATH_ALGORITHMS_MESURES_H
