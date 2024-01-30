/*
 * Copyright 2022 c3ntaur1
 */

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
T cosineLawDeg(T a, T b, T alphaDeg){  //Cosine Law with alpha in degrees
    T alpha = (M_PI * alphaDeg) / 180; //Conversion from degree to radian -> cos() function's param requires val in rad
    T c2 = pow(a, 2) + pow(b, 2) - (2*a*b* cos(alpha));
    return sqrt(c2);
}

template<typename T>
T cosineLawRad(T a, T b, T alpha){ //Cosine Law with alpha in radian
    return sqrt(pow(a, 2) + pow(b, 2) - (2*a*b* cos(alpha)));
}
/*
 * END OF PENDING TESTING AREA
 */

#endif //MATH_ALGORITHMS_TRIANGLES_H
