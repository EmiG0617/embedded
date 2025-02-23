#include "arithmetic.h" //header file which contains prototypes

double add(double a, double b) {
    return a +  b;
}

double subtract(double a, double b) {
    return a -  b;
}

double multiply(double a, double b) {
    return a *  b;
}

double divide(double a, double b) {
    if (b == 0) { //divide by zero error handling
        return 0;
    }
    return a / b;
}