/*
 * Copyright 2024 c3ntaur1
 */
#ifndef MATH_ALGORITHMS_PLANE_H
#define MATH_ALGORITHMS_PLANE_H

#include<vector>
#include<iostream>

using namespace std;

class Plane {
protected:
    vector< vector<int> >diagram; //must be seen as a 2D vector
    /*
     * each element of the diagram is a dot in a cartesian diagram
     */
    int max_x;
    int max_y;
public:
    void setPointValue(int x, int y, int value);
    vector< vector<int> >getDiagram();
    Plane(int initial_x, int initial_y);
    void consolePrintPlane();
};


#endif //MATH_ALGORITHMS_PLANE_H
