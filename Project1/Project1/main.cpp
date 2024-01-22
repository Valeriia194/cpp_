// Task 1

#include <iostream>
#include <fstream>
#include <string>

int main() {
    char userChar;
    std::cout << "Enter simbol: ";
    std::cin >> userChar;

    std::ifstream file("filename.txt");
    if (!file) {
        std::cerr << "Cant open the file!\n";
        return 1;
    }

    int count = 0;
    std::string word;
    while (file >> word) {
        if (word[0] == userChar) {
            ++count;
        }
    }

    std::cout << "Quantity of words started from '" << userChar << "': " << count << '\n';

    return 0;
}
