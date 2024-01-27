#include <iostream>
#include <string>
#include <random>

using namespace std;



int main() 
{
	string playerName;
	int playerHealth;
	string playerClass;
	int playerPower;
	int percentHealth;

	//Enter Data___________________________________

	cout << "Enter the Player name: " << endl;
	cin >> playerName;

	cout << "Enter the Player health: " << endl;
	cin >> playerHealth;
	percentHealth = playerHealth/100;

	cout << "Enter the Player Class(Mage or Warrior): " << endl;
	cin >> playerClass;

	cout << "Enter the Player Power: " << endl;
	cin >> playerPower;

	while (playerHealth > 0) {
		cout << "Enter the damage for " << playerName << ":" << endl;
		int damage;
		cin >> damage;
		cout << "Health: " << playerHealth << endl;
	// Checked the Class________________________________

		if (playerClass == "Mage") {
			if (damage > playerPower * 2) {
				if (rand() % 2 == 0) {
					std::cout << "No damage!" << endl;
				}
				else {
					playerHealth = playerHealth - damage;
				}
			}
			else if (damage%2==0) {
				playerHealth = playerHealth - damage*2;
			}
			else {
				playerHealth = playerHealth - damage;
			}
		}
		else if (playerClass == "Warrior") {
			if (playerHealth < percentHealth * 30) {
				playerHealth = playerHealth - (damage - playerPower);
			}
			else if (damage % 2 == 0) {
				cout << "No damage!" << endl;
			}
			else {
				playerHealth = playerHealth - damage * 3;
			}
		}
		else {
			cout << "Wrong Class!" << endl;
		}

	// Checked is Dead_______________________________

		if (playerHealth <= 0) {
			cout << playerName << " is DEAD!";
		}
	}

	return 0;
}
