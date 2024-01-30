//
// Created by ANBonin on 30/01/2024.
//
#include "plane.h"

void Plane::setPointValue(int x, int y, int value){ //0 for empty, 1 for line, 2 for vertex
        this->diagram[x][y] = value;
        if(this->max_x < x){this->max_x = x;}
        if(this->max_y < y){this->max_y = y;}

}
vector<vector<int>>Plane::getDiagram(){
    return this->diagram;
}

Plane::Plane(int initial_x, int initial_y){
    vector<int> standardY; //Standard columns with zero in all points
    for(; standardY.size() < initial_y;){
        standardY.push_back(0);
    }
    while(initial_x > this->diagram.size()) {
        this->diagram.push_back(standardY);
    }
}

void Plane::consolePrintPlane(){
    /*
    Plane test(10, 10);

    vector< vector<int> > matrix = test.getDiagram();
    */

    vector< vector<int> >::iterator x;
    vector<int>::iterator y;

    for(x = this->diagram.begin(); x < this->diagram.end(); x++){
        for(y = x->begin(); y < x->end(); y++){
            cout << *y;
        }
        cout << endl;
    }
}
