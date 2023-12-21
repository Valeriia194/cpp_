// Task 1

//#include <iostream>
//
//void insertBlock(int*& arr, int& n, int index, int* block, int m) {
//    if (index < 0 || index > n) {
//        std::cout << "Error" << std::endl;
//        return;
//    }
//
//    int* newArr = new int[n + m];
//
//    for (int i = 0; i < index; i++) {
//        newArr[i] = arr[i];
//    }
//
//    for (int i = 0; i < m; i++) {
//        newArr[index + i] = block[i];
//    }
//
//    for (int i = index; i < n; i++) {
//        newArr[i + m] = arr[i];
//    }
//
//    delete[] arr;
//
//    arr = newArr;
//    n += m;
//}
//
//int main() {
//    int n = 5;
//    int* arr = new int[n] {1, 2, 3, 4, 5};
//
//    int m = 3;
//    int* block = new int[m] {6, 7, 8};
//
//    insertBlock(arr, n, 2, block, m);
//
//    for (int i = 0; i < n; i++) {
//        std::cout << arr[i] << " ";
//    }
//
//    delete[] arr;
//    delete[] block;
//
//    return 0;
//}


// Task 2

#include <iostream>

void appendBlock(int*& arr, int& n, int* block, int m) {
    int* newArr = new int[n + m];

    for (int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }

    for (int i = 0; i < m; i++) {
        newArr[n + i] = block[i];
    }

    delete[] arr;

    arr = newArr;
    n += m;
}

int main() {
    int n = 5;
    int* arr = new int[n] {1, 2, 3, 4, 5};

    int m = 3;
    int* block = new int[m] {6, 7, 8};

    appendBlock(arr, n, block, m);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    delete[] arr;
    delete[] block;

    return 0;
}