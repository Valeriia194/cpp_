#include <cstdlib>
#include <iostream>
#include "function.h"

void FillArrayInt(int* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }
}

void ShowArrayInt(int* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void FillArrayDouble(double* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = (double)rand() / RAND_MAX;
    }
}

void ShowArrayDouble(double* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void FillArrayChar(char* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 'A' + rand() % 26;
    }
}

void ShowArrayChar(char* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}