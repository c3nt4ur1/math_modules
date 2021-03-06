/*
 * Created by c3nt4ur1 in 22/04/2022
 * Copyright 2022 c3ntaur1
 */

#ifndef GEOMETRIC_PROGRESSION_GEOMETRIC_PROGRESSION_H
#define GEOMETRIC_PROGRESSION_GEOMETRIC_PROGRESSION_H
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

#include "progression.h"
class GeometricProgression : protected Progression{
protected:
    double reason = 0;
    double infiniteSum = 0;

public:
#define __no_infinite_sum false
    //After configuration of the class, write equivalent functions to the geometric_progression namespace
    //Constructors
    GeometricProgression() : Progression(){/*Initializes an empty geometric progression */}

    GeometricProgression(double reason, double term1) : Progression(term1){
        this->reason = reason;
        this->formationLaw = to_string(term1) + to_string(this->reason) + "^ n-1";
        if(reason >= 0 && reason <= 1){
            this->infiniteSum = (this->term1)/(1-reason);
        }else{
            this->infiniteSum = __no_infinite_sum;
        }
    }
    //Destructor
    ~GeometricProgression() {
        delete this;
    }

    //Functions
    template<typename T> T getNTerm(int n){
        return (term1 * pow(this->reason, (n-1)));
    }
    template<typename T> T getNSum(int n){
        return (term1 * (1 - pow(reason, n))) / (1-reason);
    }
};

namespace geometric_progression{
    template<typename T> T n_term(T reason, int n, T term1){
        return term1*(pow(reason, (n-1.0)));
    }

    template<typename T> double n_sum(int n, T term1, T reason){
        double side1 = term1*(1-pow(reason, n));
        double side2 = 1-reason;
        return side1/side2;
    }
    template<typename T> double infinity_sum(T reason, T term1){
        return (term1) / (1-reason);
    }

}

#endif //GEOMETRIC_PROGRESSION_GEOMETRIC_PROGRESSION_H


//   _______   _______   __      __   ___________   ________    _     _    ________    __
// /  _____/  | _____|  | |    /  |  |___    ___|  |   ___  |  | |   | |  |   ___  |  |__|
// |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  |__| _|   __
// |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \ \     |  |
// |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \ \    |  |
// \_______/  |______|  |___/   |_|      |__|      |__|  |__|   \_____/   |_|   \_\   |__|



