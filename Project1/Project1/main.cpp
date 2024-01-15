// TASK 1 
//_________________________________________________________________________________
//
//#include <iostream>
//#include <string>
//
//int main() {
//    std::string str;
//    std::cout << "Enter the string with brackets: ";
//    std::getline(std::cin, str);
//
//    int open_bracket = str.find('(');
//    int close_bracket = str.find(')');
//
//    if (open_bracket == std::string::npos || close_bracket == std::string::npos) {
//        std::cout << "Absent one bracket.\n";
//    }
//    else {
//        str.erase(open_bracket + 1, close_bracket - open_bracket - 1);
//        std::cout << "New string: " << str << '\n';
//    }
//
//    return 0;
//}


// TASK 2 
//_________________________________________________________________________________
//#include <iostream>
//#include <string>
//
//int main() {
//    std::string s;
//    std::cout << "Enter the word: ";
//    std::cin >> s;
//
//    int count[26][26] = { 0 };
//    for (int i = 0; i < s.size() - 1; ++i) {
//        count[s[i] - 'a'][s[i + 1] - 'a']++;
//    }
//
//    int different_pairs = 0;
//    for (int i = 0; i < 26; ++i) {
//        for (int j = 0; j < 26; ++j) {
//            if (count[i][j] > 0) {
//                different_pairs++;
//                std::cout << char(i + 'a') << char(j + 'a') << " has " << count[i][j] << " pairs\n";
//            }
//        }
//    }
//
//    std::cout << "In word " << different_pairs << " different pairs.\n";
//
//    return 0;
//}

// TASK 3
//_________________________________________________________________________________

#include <iostream>
#include <string>

int main() {
    std::string sentence;
    std::cout << "Enter the sentence: ";
    std::getline(std::cin, sentence);

    int pos = 0;
    while ((pos = sentence.find(' ')) != std::string::npos) {
        std::string word = sentence.substr(0, pos);
        if (word.size() >= 3) {
            std::cout << word << ' ';
        }
        sentence.erase(0, pos + 1);
    }

    if (sentence.size() >= 3) {
        std::cout << sentence;
    }

    return 0;
}
