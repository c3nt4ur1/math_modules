/*
 * Copyright 2024 c3ntaur1
 */

#ifndef MATH_ALGORITHMS_FLATSURFACE_H
#define MATH_ALGORITHMS_FLATSURFACE_H

#include <vector>
#include <iostream>
using namespace std;

#include "plane.h"
class FlatSurface {
protected:
    Plane region = Plane(1000, 1000);
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
