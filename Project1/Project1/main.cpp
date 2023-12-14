// Task1

//#include <iostream>
//
//int findLargestDivisor(int* num) {
//    int largestDivisor = 1;
//    for (int i = 2; i <= *num / 2; i++) {
//        if (*num % i == 0) {
//            largestDivisor = i;
//        }
//    }
//    return largestDivisor;
//}
//
//int main() {
//    int num = 100;
//    int* ptr = &num;
//    std::cout << "The largest divisor of " << num << " is " << findLargestDivisor(ptr) << std::endl;
//    return 0;
//}

// Task2

//#include <iostream>
//#include <cmath>
//
//bool isPerfectSquare(int x) {
//    int s = sqrt(x);
//    return (s * s == x);
//}
//
//bool isFibonacci(int* n) {
//    return isPerfectSquare(5 * (*n) * (*n) + 4) ||
//        isPerfectSquare(5 * (*n) * (*n) - 4);
//}
//
//int main() {
//    int num = 13;
//    int* ptr = &num;
//    if (isFibonacci(ptr))
//        std::cout << num << "It is a Fibonacci number.";
//    else
//        std::cout << num << "It is not a Fibonacci number.";
//    return 0;
//}

//Task 3

#include <iostream>

int reverseNumber(int* num) {
    int reversedNumber = 0;
    while (*num != 0) {
        int remainder = *num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        *num /= 10;
    }
    return reversedNumber;
}

int main() {
    int num = 12345;
    int* ptr = &num;
    std::cout << "The reverse is " << reverseNumber(ptr) << std::endl;

    return 0;
}