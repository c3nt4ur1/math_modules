//
// Created by ANBonin on 20/08/2022.
//

#ifndef MATH_ALGORITHMS_MESURES_H
#define MATH_ALGORITHMS_MESURES_H
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

namespace degree {
    template<typename T>
    T sameSin(T angle) {
        T delta;
        switch (angle) {
            case angle > 0 && angle < 90:
                return 180 - angle;
            case angle > 90 && angle < 180:
                return 180 - angle;
            case angle > 180 && angle < 270:
                delta = angle - 180;
                return 360 - delta;
            case angle > 270 && angle < 360:
                delta = 360 - angle;
                return 180 + delta;
            default:
                return NULL;
        }
    }
}


#endif //MATH_ALGORITHMS_MESURES_H
