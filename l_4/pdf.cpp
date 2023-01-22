//
// Created by mike on 17.01.23.
//
float power(float base, unsigned int exp) {
    float result = 1.0f;
    for (unsigned int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}