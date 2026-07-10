// This file contains other practice functions to be imported into HelloWorld.cpp

// This function computes the factorial of an integer a >= 0
int factorial(int a) {
    int result {1};
    for (int i {a}; i >= 1; i--) {
        result *= i;
    }
    return result;
}