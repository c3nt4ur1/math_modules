/*
 * Created by c3nt4ur1 in 05/05/2021
 * Copyright 2022 c3ntaur1
 */

#ifndef MATH_ALGORITHMS_PROGRESSION_H
#define MATH_ALGORITHMS_PROGRESSION_H

//Creates a base class for all kinds of progression
#include <vector>
using namespace std;

#include <iostream>

class Progression{
protected:
    vector<double> currentArray;
    double term1 = currentArray[0];
    string formationLaw;
public:
    //Constructors
    Progression(){ /*Generates an empty progression */ }

    explicit Progression(vector<double> vec){
        this->currentArray = vec;
        this->term1 = currentArray[0];
    }

    Progression(vector<double> vec, string fl){
        this->currentArray = vec;
        this->term1 = currentArray[0];
        this->formationLaw = fl;
    }
    //Destructor
    ~Progression(){
        delete this;
    }
};

#endif


//   _______   _______   __      __   ___________   ________    _     _    ________    __
// /  _____/  | _____|  | |    /  |  |___    ___|  |   ___  |  | |   | |  |   ___  |  |__|
// |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  |__| _|   __
// |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \ \     |  |
// |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \ \    |  |
// \_______/  |______|  |___/   |_|      |__|      |__|  |__|   \_____/   |_|   \_\   |__|