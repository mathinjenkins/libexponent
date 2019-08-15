#include<exponent/exponent.h>

float CalculateExponent(float base, float power){
    if (base == 0) {
        return 0;
    }
    float result = 1;
    for (int i = 0; i<power; i++) {
        result *= base;
    }
    return result;
}