#include "tempconverter.h"

double celsius_to_fahrenheit(double temp_celsius) { //convert to F using (C * 1.8 + 32() = F
    return (temp_celsius * 9/5) + 32;
}

double fahrenheit_to_celsius(double temp_fahrenheit) { // convert to C using (F - 32) * (5/9) = C
    return (temp_fahrenheit - 32) *(5/9);
}