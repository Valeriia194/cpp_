// LW 1
//________________________________________________________________________

//#include <iostream>
//#include <random>
//#include <string>
//
//template <typename T>
//class RandomGenerator {
//public:
//    RandomGenerator(T min, T max) : distribution(min, max) {}
//
//    T generate() {
//        return distribution(generator);
//    }
//
//private:
//    std::random_device rd;
//    std::mt19937 generator{ rd() };
//    std::uniform_int_distribution<T> distribution;
//};
//
//template <>
//class RandomGenerator<std::string> {
//public:
//    RandomGenerator(int len) : length(len), distribution('a', 'z') {}
//
//    std::string generate() {
//        std::string result;
//        for (int i = 0; i < length; ++i) {
//            result += distribution(generator);
//        }
//        return result;
//    }
//
//private:
//    int length;
//    std::random_device rd;
//    std::mt19937 generator{ rd() };
//    std::uniform_int_distribution<char> distribution;
//};
//
//template <>
//class RandomGenerator<bool> {
//public:
//    RandomGenerator() : distribution(0, 1) {}
//
//    bool generate() {
//        return distribution(generator);
//    }
//
//private:
//    std::random_device rd;
//    std::mt19937 generator{ rd() };
//    std::uniform_int_distribution<int> distribution;
//};
//
//int main() {
//    
//    RandomGenerator<int> intGen(1, 10);
//    std::cout << "Random integer: " << intGen.generate() << std::endl;
//
//   
//    RandomGenerator<std::string> stringGen(5);
//    std::cout << "Random string: " << stringGen.generate() << std::endl;
//
//    
//    RandomGenerator<bool> boolGen;
//    std::cout << "Random boolean: " << std::boolalpha << boolGen.generate() << std::endl;
//
//    return 0;
//}


// LW 2
//________________________________________________________________________

//#include <iostream>
//#include <string>
//#include <algorithm>
//
//template <typename T>
//class StringContainer {
//private:
//    T str;
//public:
//
//    StringContainer(T s) : str(s) {}
//
//
//    void concatenate(T s) {
//        str += s;
//    }
//
//
//    int findChar(char c) {
//        return str.find(c);
//    }
//
//
//    void replaceChar(char oldChar, char newChar) {
//        std::replace(str.begin(), str.end(), oldChar, newChar);
//    }
//
//
//    T getString() {
//        return str;
//    }
//};
//
//int main() {
//    StringContainer<std::string> sc("Hello, World!");
//    sc.concatenate(" How are you?");
//    sc.replaceChar('H', 'h');
//    std::cout << sc.getString() << std::endl;
//    return 0;
//}



// LW 3
//________________________________________________________________________

//#include <iostream>
//#include <map>
//#include <iostream>
//
//template <typename K, typename V>
//class KeyValueContainer {
//private:
//    std::map<K, V> kv_map;
//public:
//
//    void add(K key, V value) {
//        kv_map[key] = value;
//    }
//
//
//    void remove(K key) {
//        kv_map.erase(key);
//    }
//
//
//    V find(K key) {
//        if (kv_map.find(key) != kv_map.end()) {
//            return kv_map[key];
//        }
//        else {
//            throw std::invalid_argument("Key not found");
//        }
//    }
//};
//
//int main() {
//    KeyValueContainer<std::string, int> kvc;
//    kvc.add("one", 1);
//    kvc.add("two", 2);
//    std::cout << kvc.find("one") << std::endl;
//    kvc.remove("one");
//    return 0;
//}




// HW 1
//________________________________________________________________________

//#include <algorithm>
//#include <vector>
//#include <iostream>
//
//
//template <typename T>
//T findMax(std::vector<T>& v) {
//    return *std::max_element(v.begin(), v.end());
//}
//
//template <typename T>
//T findMin(std::vector<T>& v) {
//    return *std::min_element(v.begin(), v.end());
//}
//
//template <typename T>
//void sortArray(std::vector<T>& v) {
//    std::sort(v.begin(), v.end());
//}
//
//template <typename T>
//int binarySearch(std::vector<T>& v, T target) {
//    auto it = std::lower_bound(v.begin(), v.end(), target);
//    if (it == v.end() || *it != target) {
//        return -1; 
//    }
//    else {
//        return it - v.begin(); 
//    }
//}
//
//
//template <typename T>
//void replaceElement(std::vector<T>& v, T oldVal, T newVal) {
//    std::replace(v.begin(), v.end(), oldVal, newVal);
//}
//
//int main() {
//    std::vector<int> v = { 1, 2, 3, 4, 5 };
//    std::cout << "Max: " << findMax(v) << std::endl;
//    std::cout << "Min: " << findMin(v) << std::endl;
//    replaceElement(v, 2, 20);
//    sortArray(v);
//    std::cout << "Index of 20: " << binarySearch(v, 20) << std::endl;
//    return 0;
//}


// HW 2
//________________________________________________________________________

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

template <typename T>
class Matrix {
private:
    std::vector<std::vector<T>> data;
public:
    Matrix(int rows, int cols) : data(rows, std::vector<T>(cols)) {}


    void fillRandom(T min, T max) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<> dis(min, max);

        for (auto& row : data) {
            for (auto& elem : row) {
                elem = dis(gen);
            }
        }
    }


    void display() const {
        for (const auto& row : data) {
            for (const auto& elem : row) {
                std::cout << elem << ' ';
            }
            std::cout << '\n';
        }
    }


    T maxElement() const {
        T maxVal = data[0][0];
        for (const auto& row : data) {
            T maxRow = *std::max_element(row.begin(), row.end());
            maxVal = std::max(maxVal, maxRow);
        }
        return maxVal;
    }


    T minElement() const {
        T minVal = data[0][0];
        for (const auto& row : data) {
            T minRow = *std::min_element(row.begin(), row.end());
            minVal = std::min(minVal, minRow);
        }
        return minVal;
    }


    Matrix operator+(const Matrix& other) const;
    Matrix operator-(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    Matrix operator/(const Matrix& other) const;
};


template <typename T>
Matrix<T> Matrix<T>::operator+(const Matrix<T>& other) const {

}

template <typename T>
Matrix<T> Matrix<T>::operator-(const Matrix<T>& other) const {

}

template <typename T>
Matrix<T> Matrix<T>::operator*(const Matrix<T>& other) const {

}

template <typename T>
Matrix<T> Matrix<T>::operator/(const Matrix<T>& other) const {

}
