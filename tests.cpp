//
// Created by ANBonin on 07/07/2023.
//

#include "tests.h"
void degree_quad_test(int first_q, int sec_q, int third_q, int fourth_q, int red_first_q,
                      int red_sec_q, int red_third_q, int red_fourth_q, const char* id){

    //clause 1 - all integers between 0 and 360
    degree::quadrant(first_q) == 1?cout<< id <<"Clause 1A: Successful":cout<<"Clause 1A: Failed";
    degree::quadrant(sec_q) == 2?cout<< id << "Clause 1B: Successful":cout<<"Clause 1B Failed";
    degree::quadrant(third_q) == 3?cout << id << "Clause 1C: Successful":cout<<"Clause 1C Failed";
    degree::quadrant(fourth_q) == 4?cout << id << "Clause 1D: Successful":cout<<"Clause 1D: Failed";


}
