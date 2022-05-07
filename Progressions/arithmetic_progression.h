/*
 * Created by c3nt4ur1 in 22/04/2022
 * Copyright 2022 c3ntaur1
 */

#include <iostream>
using namespace std;

//create a class inherited from Progression ("progression.h")
#include "progression.h"

class ArithmeticProgression : protected Progression{

    //After configuration of the class, write equivalent functions to the arithmetic_progression namespace
    //Constructors
    explicit ArithmeticProgression(double reason) : Progression(){
        this->reason = reason;
    }

    ArithmeticProgression(double reason, double term) : Progression(term){
        this->reason = reason;
    }
    //Destructor
    ~ArithmeticProgression(){
        delete this;
    }

    //Functions
    [[noreturn]] void increaseProgression(int num ){ // Adds num terms to the arithmetic progression
        if(this->term1) {
            for (int i = 0; i < num; i++) {
                this->currentArray.push_back(this->term1 + ((num - 1) * this->reason));
            }
        }
    }

protected:
    double reason;
};

namespace arithmetic_progression { //Functions for POP usage of arithmetic progressions

    template<typename T>
    T reason(T* pArray) { //Returns the increasing rate (r) //Param: Pointer to index[0] of the array
        T a1 = *pArray;
        T a2 = *(++pArray);
        return a2 - a1;
    }

    template<typename T>
    T nTerm(T* pArray, int n) {

        /*
         * //Returns the value for the n(th) term of the array
         * Param1: Pointer to index[o] of the array
         * Param2: Value of n (Required Term)
         */

        T a1 = *pArray;
        T r = reason(pArray);

        return (a1 + ((--n) * r));
    }

    template<typename T>
    T sumNFirstNums(T* pArray, int n){
        return (n * (*pArray + nTerm(pArray, n))) / 2;
    }
}

//   _______   _______   __      __   ___________   ________    _     _    ________    __
// /  _____/  | _____|  | |    /  |  |___    ___|  |   ___  |  | |   | |  |   ___  |  |__|
// |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  |__| _|   __
// |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \ \     |  |
// |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \ \    |  |
// \_______/  |______|  |___/   |_|      |__|      |__|  |__|   \_____/   |_|   \_\   |__|