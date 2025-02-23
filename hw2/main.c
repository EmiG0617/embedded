#include <stdio.h>
#include "tempconverter.h"
#include "arithmetic.h"

#ifdef __cplusplus 
extern "C"
{
#endif

int main() {
    // Temperature conversion example
    double temp_c = 25.0;
    double temp_f = celsius_to_fahrenheit(temp_c);
    printf("%.2f Celsius is %.2f Fahrenheit\n", temp_c, temp_f);

    // Arithmetic example
    double a = 10.0, b = 5.0;
    printf("Addition: %.2f\n", add(a, b));
    printf("Subtraction: %.2f\n", subtract(a, b));
    printf("Multiplication: %.2f\n", multiply(a, b));
    
    // Division with error handling
    double result = divide(a, b);
    if (result == 0) {
        printf("Error: Division by zero!\n");
    } else {
        printf("Division: %.2f\n", result);
    }

    return 0;
}
#ifdef __cplusplus
}
#endif
