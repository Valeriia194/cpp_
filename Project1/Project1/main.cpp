
// Task with sortation
//__________________________________________________________________________________



//#include <iostream>
//#include <string>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//void selectionSort(vector<int>& arr) {
//    int n = arr.size();
//    for (int i = 0; i < n - 1; i++) {
//        int minIndex = i;
//        for (int j = i + 1; j < n; j++)
//            if (arr[j] < arr[minIndex])
//                minIndex = j;
//        if (minIndex != i)
//            swap(arr[i], arr[minIndex]);
//    }
//}
//
//void insertionSort(vector<int>& arr) {
//    int n = arr.size();
//    for (int i = 1; i < n; i++) {
//        int key = arr[i];
//        int j = i - 1;
//        while (j >= 0 && arr[j] > key) {
//            arr[j + 1] = arr[j];
//            j = j - 1;
//        }
//        arr[j + 1] = key;
//    }
//}
//
//
//int main() {
//    vector<int> arr = { 30, 40, 20, 50, 10 };
//    selectionSort(arr);
//    cout << " Sorted selection array: \n";
//    for (int i = 0; i < arr.size(); i++)
//        cout << arr[i] << " ";
//    insertionSort(arr);
//    cout << "\n Sorted insertion array: \n";
//    for (int i = 0; i < arr.size(); i++)
//        cout << arr[i] << " ";
//    return 0;
//}
//


// Task with searching
//__________________________________________________________________________________


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int linearSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target)
            return i; 
    }
    return -1; 
}


int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid; 
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}

int main() {
    vector<int> arr = { 10, 20, 30, 40, 50 };
    int target = 30;

    int result = linearSearch(arr, target);
    if (result != -1)
        cout << "Position by linear search: " << result << "\n";
    else
        cout << "Element by linear search not found! \n";


    result = binarySearch(arr, target);
    if (result != -1)
        cout << "Position by binary search: " << result << "\n";
    else
        cout << "Element by binary search not found! \n";

    return 0;
}
