//
// Created by ANBonin on 29/01/2024.
//

#ifndef MATH_ALGORITHMS_FLATSURFACE_H
#define MATH_ALGORITHMS_FLATSURFACE_H

#include <vector>
#include <iostream>
using namespace std;

#include "plane.h"
class FlatSurface {
protected:
    Plane region;
    vector<float>position;

    int sides = -1;
    vector<float> sidesSizes; // counted clockwise
    vector<float> angles; //counted clockwise, starting from between sides 1 and 2

    float perimeter = NULL;
public:
    float area = NULL;
    FlatSurface(Plane& plane, int sides, vector<float> sidesSizes, vector<float> angles);
};


#endif //MATH_ALGORITHMS_FLATSURFACE_H
