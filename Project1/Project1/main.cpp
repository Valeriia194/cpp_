#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Words
vector <string> words{
	"apple", "coffee", "monkey",
	"table", "language", "city",
	"player", "kitchen", "vinyl"
};

//Random word
string getRandom() {
	int sizeVocabulary = words.size();
	int randomWord = rand() % sizeVocabulary;
	return words[randomWord];
}

// Display Hangman
void displayHang(int mistakes) {
	const int maxMistakes = 5;
	string hangman[] = {
		"  +---+",
		"  |   |",
		"  O   |",
		" /|\\  |",
		" / \\  |",
		"      |",
		"========="
	};
	for (int i = 0; i < maxMistakes - mistakes; ++i) {
		std::cout << hangman[i] << std::endl;
	}
}

int main() 
{
	srand(time(NULL));

	int mistakes = 3;
	displayHang(mistakes);

	return 0;
}
