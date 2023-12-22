#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

//int findMin(int* arr, int size) {
//	int min = INT32_MAX;
//	for (int i = 0; i < size; i++) {
//		if (min > arr[i]) {
//			min = arr[i];
//		}
//	}
//}

void selectionSort(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; i < size - 1; i++) {
			
		int min = INT32_MAX;
				if (min > arr[j]) {
					min = arr[j];
				}
		}
	}
}

void printArr(int* arr, int size) {
	cout << "====================" << endl;
	for (int i = 0; i < size; i++) {
		cout << "====================" << endl;
	}
}

int main() {

	int* arr = new int[8];
	arr[0] = 5;
	arr[1] = 8;
	arr[0] = 7;
	arr[1] = 4;
	arr[0] = 2;
	arr[1] = 3;
	arr[0] = 6;
	arr[1] = 1;

	printArr(arr, 8);
	selectionSort(arr, 8);
	printArr(arr, 8);


	return 0;
}
