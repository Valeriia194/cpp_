// TASK 1
//____________________________________________________________________

//#include <iostream>
//
//class Point {
//public:
//    double x, y;
//
//    Point(double x = 0, double y = 0) : x(x), y(y) {}
//
//    Point operator+(const Point& p) const {
//        return Point(x + p.x, y + p.y);
//    }
//
//    Point operator-(const Point& p) const {
//        return Point(x - p.x, y - p.y);
//    }
//
//    bool operator<(const Point& p) const {
//        if (x != p.x) return x < p.x;
//        return y < p.y;
//    }
//
//    bool operator>(const Point& p) const {
//        return p < *this;
//    }
//
//    bool operator<=(const Point& p) const {
//        return !(p < *this);
//    }
//
//    bool operator>=(const Point& p) const {
//        return !(*this < p);
//    }
//
//    bool operator==(const Point& p) const {
//        return x == p.x && y == p.y;
//    }
//
//    bool operator!=(const Point& p) const {
//        return !(*this == p);
//    }
//
//    Point& operator++() {
//        ++x; ++y;
//        return *this;
//    }
//
//    Point operator++(int) {
//        Point temp = *this;
//        ++*this;
//        return temp;
//    }
//
//    Point& operator--() {
//        --x; --y;
//        return *this;
//    }
//
//    Point operator--(int) {
//        Point temp = *this;
//        --*this;
//        return temp;
//    }
//
//    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
//        os << '(' << p.x << ", " << p.y << ')';
//        return os;
//    }
//
//    friend std::istream& operator>>(std::istream& is, Point& p) {
//        is >> p.x >> p.y;
//        return is;
//    }
//};
//
//int main() {
//    Point p1(1.0, 2.0), p2(3.0, 4.0);
//
//
//    std::cout << "Point 1: " << p1 << std::endl;
//    std::cout << "Point 2: " << p2 << std::endl;
//
//    Point p3 = p1 + p2;
//    Point p4 = p1 - p2;
//    std::cout << "Point 1 + Point 2: " << p3 << std::endl;
//    std::cout << "Point 1 - Point 2: " << p4 << std::endl;
//
//    std::cout << "Point 1 < Point 2: " << (p1 < p2) << std::endl;
//    std::cout << "Point 1 > Point 2: " << (p1 > p2) << std::endl;
//
//    ++p1;
//    --p2;
//    std::cout << "Point 1 after ++: " << p1 << std::endl;
//    std::cout << "Point 2 after --: " << p2 << std::endl;
//
//    return 0;
//}



//TASK 2
//________________________________________________________________________________________________________

//#include <iostream>
//
//class DynamicArray {
//private:
//    int* data;
//    size_t size;
//
//public:
//    DynamicArray(size_t size = 0) : size(size), data(new int[size]) {}
//
//    DynamicArray(const DynamicArray& other) : size(other.size), data(new int[other.size]) {
//        for (size_t i = 0; i < size; ++i) {
//            data[i] = other.data[i];
//        }
//    }
//
//    ~DynamicArray() {
//        delete[] data;
//    }
//
//    DynamicArray& operator=(const DynamicArray& other) {
//        if (this != &other) {
//            delete[] data;
//
//            size = other.size;
//            data = new int[size];
//            for (size_t i = 0; i < size; ++i) {
//                data[i] = other.data[i];
//            }
//        }
//        return *this;
//    }
//
//    int& operator {
//        return data[index];
//    }
//
//    const int& operator const {
//        return data[index];
//    }
//};
//
//int main() {
//    DynamicArray arr(5);
//
//    for (size_t i = 0; i < 5; ++i) {
//        arr[i] = i;
//    }
//
//    for (size_t i = 0; i < 5; ++i) {
//        std::cout << arr[i] << ' ';
//    }
//    std::cout << std::endl;
//
//    DynamicArray arr2 = arr;
//
//    arr2[0] = 10;
//    for (size_t i = 0; i < 5; ++i) {
//        std::cout << arr2[i] << ' ';
//    }
//    std::cout << std::endl;
//
//    return 0;
//}

//TASK 3
//________________________________________________________________________________________________________
//
//#include <iostream>
//#include <cmath>
//
//class Point {
//public:
//    double x, y, z;
//
//    Point(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
//};
//
//class DistanceCalculator {
//public:
//    double operator()(const Point& p1, const Point& p2) const {
//        double dx = p2.x - p1.x;
//        double dy = p2.y - p1.y;
//        double dz = p2.z - p1.z;
//        return std::sqrt(dx * dx + dy * dy + dz * dz);
//    }
//};
//
//int main() {
//    Point p1(1.0, 2.0, 3.0);
//    Point p2(4.0, 5.0, 6.0);
//
//    DistanceCalculator distCalc;
//    double distance = distCalc(p1, p2);
//
//    std::cout << "The distance between the two points is: " << distance << std::endl;
//
//    return 0;
//}

//TASK 4
//________________________________________________________________________________________________________

//#include <iostream>
//
//class Distance {
//private:
//    double meters;
//
//public:
//    Distance(double meters = 0) : meters(meters) {}
//
//    
//    operator double() const {
//        return meters * 3.28084; 
//    }
//
//   
//    operator int() const {
//        return static_cast<int>(meters * 100); 
//    }
//};
//
//int main() {
//    Distance d(10.0); 
//    double feet = d; 
//    int centimeters = d; 
//
//    std::cout << "Distance in meters: " << 10.0 << std::endl;
//    std::cout << "Distance in feet: " << feet << std::endl;
//    std::cout << "Distance in centimeters: " << centimeters << std::endl;
//
//    return 0;
//}

//TASK 5
//________________________________________________________________________________________________________

//#include <iostream>
//#include <string>
//
//class Document {
//private:
//    std::string content;
//
//    friend class DocumentManager;
//
//public:
//    Document(const std::string& content = "") : content(content) {}
//};
//
//class DocumentManager {
//public:
//    void Create(Document& doc, const std::string& content) {
//        doc.content = content;
//    }
//
//    void Edit(Document& doc, const std::string& newContent) {
//        doc.content = newContent;
//    }
//
//    void Save(const Document& doc) {
//        std::cout << "Saving document: " << doc.content << std::endl;
//    }
//};
//
//int main() {
//    Document doc;
//    DocumentManager docManager;
//
//    docManager.Create(doc, "Hello, world!");
//    docManager.Save(doc);
//
//    docManager.Edit(doc, "Hello, Copilot!");
//    docManager.Save(doc);
//
//    return 0;
//}

//TASK 6
//________________________________________________________________________________________________________

#include <string>
#include <iostream>

class User {
private:
    std::string password;

    friend class PasswordValidator;

public:
    User(const std::string& password) : password(password) {}
};

class PasswordValidator {
public:
    bool operator()(const User& user) const {

        return user.password.size() >= 8;
    }
};

int main() {
    User user("password123");
    PasswordValidator validator;

    if (validator(user)) {
        std::cout << "Password is valid." << std::endl;
    }
    else {
        std::cout << "Password is not valid." << std::endl;
    }

    return 0;
}
