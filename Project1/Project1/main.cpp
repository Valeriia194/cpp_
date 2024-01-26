#include <iostream>
#include <string>


using namespace std;



int main() 
{
	string playerName;
	int playerHealth;
	string playerClass;

	//Enter Data___________________________________

	cout << "Enter the Player name: " << endl;
	cin >> playerName;

	cout << "Enter the Player health: " << endl;
	cin >> playerHealth;

	cout << "Enter the Player Class(Mage or Warrior): " << endl;
	cin >> playerClass;

	while (playerHealth > 0) {
		cout << "Enter the damage for " << playerName << ":" << endl;
		int damage;
		cin >> damage;

	// Checked the Class________________________________

		if (playerClass == "Mage") {
			if (damage%2==0) {
				playerHealth = playerHealth - damage*2;
			}
			else {
				playerHealth = playerHealth - damage;
			}
		}
		else if (playerClass == "Warrior") {
			if (damage % 2 == 0) {
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
