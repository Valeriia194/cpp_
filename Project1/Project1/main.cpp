#include <string>
#include <iostream>
#include <limits>
#include <stdexcept>

int stringToInt(const std::string& str) {
    try {
        int number = std::stoi(str);
        return number;
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Out of range int." << std::endl;
        throw;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Not number." << std::endl;
        throw;
    }
}

int main() {
    std::string str;
    std::cout << "Enter string for transform to int: ";
    std::cin >> str;
    try {
        int number = stringToInt(str);
        std::cout << "String in int: " << number << std::endl;
    }
    catch (...) {
        std::cerr << "Error by transform." << std::endl;
    }
    return 0;
}
