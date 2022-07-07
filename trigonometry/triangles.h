//
// Created by ANBonin on 07/07/2022.
//

#ifndef MATH_ALGORITHMS_TRIANGLES_H
#define MATH_ALGORITHMS_TRIANGLES_H
#include <cmath>

/*
 * PENDING TESTING AREA
 */

namespace pythagoras {
    template<typename T>
    T pythagoreanTheoremHypotenuse(T a, T b) {
        return sqrt(pow(a, 2) + pow(b, 2));
    }

    template<typename T>
    T pythagoreanTheoremLeg(T hypotenuse, T b){
        return sqrt(pow(hypotenuse, 2) - pow(b, 2));
    }
}
template<typename T>
T cosineLawDeg(T a, T b, T alphaDeg){
    T alpha = (M_PI * alphaDeg) / 180;
    T c2 = pow(a, 2) + pow(b, 2) - (2*a*b* cos(alpha));
    return sqrt(c2);
}

template<typename T>
T cosineLawRad(T a, T b, T alpha){
    return sqrt(pow(a, 2) + pow(b, 2) - (2*a*b* cos(alpha)));
}

#endif //MATH_ALGORITHMS_TRIANGLES_H
