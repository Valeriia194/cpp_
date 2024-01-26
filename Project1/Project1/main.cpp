// Task 1

//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main() {
//    char userChar;
//    std::cout << "Enter simbol: ";
//    std::cin >> userChar;
//
//    std::ifstream file("filename.txt", std::ios::in);
//    //file.open("filename.txt", std::ios::in);
//    if (!file.is_open()) {
//        std::cerr << "Cant open the file!\n";
//        return 1;
//    }
//
//    int count = 0;
//    std::string word;
//    while (file >> word) {
//        if (word[0] == userChar) {
//            ++count;
//        }
//    }
//
//    std::cout << "Quantity of words started from '" << userChar << "': " << count << '\n';
//
//    return 0;
//}



// Task 2



//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main() {
//    std::ifstream file1("filename.txt"), file2("filename2.txt");
//    if (!file1.is_open() || !file2.is_open()) {
//        std::cout << "Cant open file.\n";
//        return 1;
//    }
//
//    std::string line1, line2;
//    while (getline(file1, line1) && getline(file2, line2)) {
//        if (line1 != line2) {
//            std::cout << "Lines is different:\n";
//            std::cout << "File 1: " << line1 << '\n';
//            std::cout << "Fileë 2: " << line2 << '\n';
//            return 0;
//        }
//    }
//
//    std::cout << "All lines is similliar.\n";
//    return 0;
//}




// Task 3


#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream inputFile("filename.txt");
    std::ofstream outputFile("output.txt");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        std::cout << "Cant open the file.\n";
        return 1;
    }

    std::string line;
    int lineCount = 0;
    int charCount = 0;

    while (getline(inputFile, line)) {
        lineCount++;
        charCount += line.size();
    }

    outputFile << "Cuantity of symbols: " << charCount << '\n';
    outputFile << "Countity of lines: " << lineCount << '\n';

    std::cout << "Statistic in output.txt.\n";
    return 0;
}
