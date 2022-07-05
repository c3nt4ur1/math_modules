//
// Created by Adriano on 31/05/2022.
//

#ifndef MATH_ALGORITHMS_TEMPERATURE_H
#define MATH_ALGORITHMS_TEMPERATURE_H
#include <iostream>
using namespace std;

#define WATER_FREEZING_TEMP_TARGET
#define WATER_FREEZING_TEMP_SOURCE

/*
 * TO CELSIUS
 */
double fahrenheitToCelsius(double temp){
    WATER_FREEZING_TEMP_TARGET 0;
    WATER_FREEZING_TEMP_SOURCE 32;
    return (temp-32) * (5/9);
}
double kelvinToCelsius(double temp){
    WATER_FREEZING_TEMP_TARGET 0;
    WATER_FREEZING_TEMP_SOURCE 273.15;
    return temp - 273.15;
}

/*
 * FROM CELSIUS
 */
double celsiusToFahrenheit(double temp){
    WATER_FREEZING_TEMP_SOURCE 0;
    WATER_FREEZING_TEMP_TARGET 32;
    return ((9/5)*temp) - 32;
}
double celsiusToKelvin(double temp){
    WATER_FREEZING_TEMP_SOURCE 0;
    WATER_FREEZING_TEMP_TARGET 273.15;
    return temp + 273.15;
}
/*
 * OTHER
 */
double kelvinToFahrenheit(double temp){
    WATER_FREEZING_TEMP_SOURCE 273.15;
    WATER_FREEZING_TEMP_TARGET 32;
    return ((9*(temp - 273.15)) / 5) + 32;
}
double fahrenheitToKelvin(double temp){
    WATER_FREEZING_TEMP_SOURCE 32;
    WATER_FREEZING_TEMP_TARGET 273.15;
    return ((5*(temp -32)) / 9) + 273.15;
}

#endif //MATH_ALGORITHMS_TEMPERATURE_H
