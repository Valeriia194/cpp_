#define INTEGER
#define SIZE 10

#include "function.h"




int main() {
#ifdef INTEGER
    int arrayInt[SIZE];
    FillArray(arrayInt, SIZE);
    ShowArray(arrayInt, SIZE);
#elif defined(DOUBLE)
    double arrayDouble[SIZE];
    FillArray(arrayDouble, SIZE);
    ShowArray(arrayDouble, SIZE);
#elif defined(CHAR)
    char arrayChar[SIZE];
    FillArray(arrayChar, SIZE);
    ShowArray(arrayChar, SIZE);
#endif

    return 0;
}