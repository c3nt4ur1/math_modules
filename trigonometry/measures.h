//
// Created by ANBonin on 20/08/2022.
//

#ifndef MATH_ALGORITHMS_MEASURES_H
#define MATH_ALGORITHMS_MEASURES_H
#include <iostream>
#include <cmath>

using namespace std;


namespace degree {
    template<typename T>
    T determination(T angle){
        return angle % 360;
    }
    template<typename T>
    T sameSin(T src) {
        T angle = src % 360;
        if(angle >= 0 && angle < 90){
            return 180 - angle;
        }else if (angle >= 90 && angle < 180){
            return 180 - angle;
        }else if (angle >= 180 && angle < 270){
            return 540 - angle;
        }else if(angle >= 270 && angle < 360){
            return 540 - angle;
        }else{

        }
    }
}


#endif //MATH_ALGORITHMS_MEASURES_H
