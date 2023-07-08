//
// Created by ANBonin on 07/07/2023.
//

#include "tests.h"
void degree_quad_test(int first_q, int sec_q, int third_q, int fourth_q, int red_first_q,
                      int red_sec_q, int red_third_q, int red_fourth_q, int on_axis, int red_on_axis,const char* id){

    int errors = 0;
    /*     */
    //clause 1 - all integers between 0 and 360
    degree::quadrant(first_q) == 1?cout<< id <<" Clause 1A: Successful\n":cout<< id << "Clause 1A: Failed\n", errors++;
    degree::quadrant(sec_q) == 2?cout<< id << " Clause 1B: Successful\n":cout<< id << "Clause 1B Failed\n", errors++;
    degree::quadrant(third_q) == 3?cout << id << " Clause 1C: Successful\n":cout<< id << "Clause 1C Failed\n", errors++;
    degree::quadrant(fourth_q) == 4?cout << id << " Clause 1D: Successful\n":cout<< id << "Clause 1D: Failed\n", errors++;

    degree::quadrant(on_axis) == 0?cout << id << " Clause 1E: Successful\n":cout << id << "Clause 1E: Failed\n", errors++;
    /*     */

}
