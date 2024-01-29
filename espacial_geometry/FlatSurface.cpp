//
// Created by ANBonin on 29/01/2024.
//

#include "FlatSurface.h"
FlatSurface::FlatSurface(Plane& plane, int sides, vector<float> sidesSizes, vector<float> angles){
    if(sidesSizes.size() > sides){
        throw std::invalid_argument("To many size values");
    }else{
        this->region = plane;
        this->sides = sides;
        this->sidesSizes = sidesSizes;
        this->angles = angles;
    }
}