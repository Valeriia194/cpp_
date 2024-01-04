
// TASK 1 Lab
//_______________________________________________________________

//#include <iostream>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
//bool hasZero(int* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] == 0)
//            return true;
//    }
//    return false;
//}
//
//int main() {
//    const int ROWS = 3;
//    const int COLS = 3;
//    int matrix[ROWS][COLS] = { {1, 2, 3}, {4, 0, 6}, {7, 8, 9} };
//    int** newMatrix = new int* [ROWS];
//    int newRow = 0;
//
//    for (int i = 0; i < ROWS; ++i) {
//        if (!hasZero(matrix[i], COLS)) {
//            newMatrix[newRow] = new int[COLS];
//            for (int j = 0; j < COLS; ++j) {
//                newMatrix[newRow][j] = matrix[i][j];
//            }
//            ++newRow;
//        }
//    }
//
//    for (int i = 0; i < newRow; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            cout << newMatrix[i][j] << ' ';
//        }
//        cout << '\n';
//    }
//
//    for (int i = 0; i < newRow; ++i) {
//        delete[] newMatrix[i];
//    }
//    delete[] newMatrix;
//
//	return 0;
//}


// TASK 2 Lab
//_______________________________________________________________

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//    srand(time(0));
//    int rows, cols;
//
//    cout << "Enter the quantity of rows: ";
//    cin >> rows;
//    cout << "Enter the quantity of cols: ";
//    cin >> cols;
//
//    int** matrix1 = new int* [rows];
//    int** matrix2 = new int* [rows];
//    int** result = new int* [rows];
//
//    for (int i = 0; i < rows; ++i) {
//        matrix1[i] = new int[cols];
//        matrix2[i] = new int[cols];
//        result[i] = new int[cols];
//    }
//
//    cout << "Matrix 1:\n";
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            matrix1[i][j] = rand() % 100;
//            cout << matrix1[i][j] << ' ';
//        }
//        cout << '\n';
//    }
//
//    cout << "Matrix 2:\n";
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            matrix2[i][j] = rand() % 100;
//            cout << matrix2[i][j] << ' ';
//        }
//        cout << '\n';
//    }
//
//    cout << "Result:\n";
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            result[i][j] = matrix1[i][j] + matrix2[i][j];
//            cout << result[i][j] << ' ';
//        }
//        cout << '\n';
//    }
//
//    for (int i = 0; i < rows; ++i) {
//        delete[] matrix1[i];
//        delete[] matrix2[i];
//        delete[] result[i];
//    }
//    delete[] matrix1;
//    delete[] matrix2;
//    delete[] result;
//
//    return 0;
//}


// TASK 1 HW
//_______________________________________________________________

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void addRow(vector<vector<int>>& matrix, const vector<int>& newRow) {
//    matrix.push_back(newRow);
//}
//
//int main() {
//    vector<vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//    vector<int> newRow = { 10, 11, 12 };
//
//    addRow(matrix, newRow);
//
//    for (const auto& row : matrix) {
//        for (int elem : row)
//            cout << elem << ' ';
//        cout << '\n';
//    }
//
//    return 0;
//}


// TASK 2 HW
//_______________________________________________________________

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void addRowToFront(vector<vector<int>>& matrix, const vector<int>& newRow) {
//    matrix.insert(matrix.begin(), newRow);
//}
//
//int main() {
//    vector<vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//    vector<int> newRow = { 10, 11, 12 };
//
//    addRowToFront(matrix, newRow);
//
//    for (const auto& row : matrix) {
//        for (int elem : row)
//            cout << elem << ' ';
//        cout << '\n';
//    }
//
//    return 0;
//}


// TASK 3 HW
//_______________________________________________________________

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void addRow(vector<vector<int>>& matrix, const vector<int>& newRow, int position) {
//    if (position >= 0 && position <= matrix.size()) {
//        matrix.insert(matrix.begin() + position, newRow);
//    }
//}
//
//int main() {
//    vector<vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//    vector<int> newRow = { 10, 11, 12 };
//    int position;
//
//    cout << "Enter the position for new row (from 0 to " << matrix.size() << "): ";
//    cin >> position;
//
//    addRow(matrix, newRow, position);
//
//    for (const auto& row : matrix) {
//        for (int elem : row)
//            cout << elem << ' ';
//        cout << '\n';
//    }
//
//    return 0;
//}

// TASK 4 HW
//_______________________________________________________________

#include <iostream>
#include <vector>
using namespace std;

void removeRow(vector<vector<int>>& matrix, int rowNumber) {
    if (rowNumber >= 0 && rowNumber < matrix.size()) {
        matrix.erase(matrix.begin() + rowNumber);
    }
}

int main() {
    vector<vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int rowNumber;

    cout << "Enter the number of row to delete (from 0 to " << matrix.size() - 1 << "): ";
    cin >> rowNumber;

    removeRow(matrix, rowNumber);

    for (const auto& row : matrix) {
        for (int elem : row)
            cout << elem << ' ';
        cout << '\n';
    }

    return 0;
}
