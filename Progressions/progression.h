//
// Created by Adriano on 05/05/2022.
//

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
}

#endif //MATH_ALGORITHMS_PROGRESSION_H
