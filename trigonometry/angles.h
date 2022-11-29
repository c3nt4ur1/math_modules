//
// Created by ANBonin on 20/08/2022.
//

#ifndef MATH_ALGORITHMS_ANGLES_H
#define MATH_ALGORITHMS_ANGLES_H
#include <iostream>
#include <cmath>
using namespace std;

namespace degree {
    template<typename T>
    T determination(T angle){
        T temp = angle % 360;
        if(temp >= 0){
            return temp;
        }
        return 360 + temp; //-|-x| = +x, therefore 360 - |x|; x < 0 = 360 + x
    }
    template <typename T>
    int quadrant(T angle){
        T temp = determination(angle);
        if(temp > 0 && temp < 90){
            return 1;
        }else if(temp > 90 && angle < 180){
            return 2;
        }else if(temp > 180 && angle < 360){
            return 3;
        }else if(temp > 270 && angle < 360){
            return 4;
        }
        return 0; //Error: If the angle is over an axis, its quadrant will be set as 0
    }

    template <typename T>
    T reduction(T angle){
        T temp = determination(angle);
        if(quadrant(temp) == 1){
            return temp;
        }else if(quadrant(temp) == 2){
            return 180 - temp;
        }else if(quadrant(temp) == 3){
            return temp - 180;
        }else if(quadrant(temp) == 4){
            return 360 - temp;
        }
        return -1; //Error: The angle cannot be reduced since it belongs to an axis

    }
    template<typename T>
    T sameSin(T src) { //Simplifying the function with degree::reduction and degree::determination required
        T angle = determination(src);
        if((angle >= 0 && angle < 90) || (angle >= 90 && angle < 180)){
            return 180 - angle;
        }else if ((angle >= 180 && angle < 270) || (angle >= 270 && angle < 360)){
            return 540 - angle;
        }else{
            return -1;
        }
    }
    template<typename T>
    T sameCos(T src) {
        T angle = determination(src);

        if(quadrant(angle) == 1){
            return 360 - angle;
        }else if(quadrant(angle) == 2){
            return 180 + reduction(angle);
        }else if(quadrant(angle) == 3){
            return 180 - reduction(angle);
        }else if(quadrant(angle) == 4){
            reduction(angle);
        }else if(quadrant(angle) == 0){
            return reduction(angle + 180);
        }
    }
}

namespace radian{
    template <typename T>
    T determination(T angle) {
        if (angle >= 0) {
            return angle % (2 * M_PI);
        }else{
            T temp = (2 * M_PI) - angle;
            return temp % (2 * M_PI);
        }
    }
}


#endif //MATH_ALGORITHMS_ANGLES_H
