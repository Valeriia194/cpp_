#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

enum PersonClass {
		MAGE,
		WARRIOR,
		ROGUE
	};

struct Person {
	int id;
	PersonClass pClass;
	float melee;
	float ranged;

	float totalAttack() { return melee + ranged;  }
};

int strangest(vector <Person>& person) {
	int maxId = 0;
	float maxAttack = 0;

	for (Person& person : person) {
		float total = person.totalAttack();
		if (maxAttack < total) {
			maxAttack = total;
			maxId = person.id;
		}
	}
	return maxId;
}

map <PersonClass, int> strongestInEachClass(vector<Person>& persons) {
	map <PersonClass, Person> strongestPersons;
	for (Person& person : persons) {
		if (strongestPersons.find(person.pClass) == strongestPersons.end() ||
			strongestPersons[person.pClass].totalAttack() < person.totalAttack()) {
			strongestPersons[person.pClass] = person;
		}
	}

	map <PersonClass, int> strongestPersonIds;
	for (const auto& pair : strongestPersons) {
		strongestPersonIds[pair.first] = pair.second.id;
	}
	return strongestPersonIds;
}



int main() 
{

	vector<Person>person = {
		{1, MAGE, 3.0f, 5.0f},
		{2, WARRIOR, 4.0f, 6.0f},
		{3, ROGUE, 1.0f, 2.0f}
	};

	int win = strangest(person);
	cout << "The strangest person is " << win << "!!" << endl;

	map<PersonClass, int> strongestPersonIds = strongestInEachClass(person);

	for (const auto& pair : strongestPersonIds) {
		cout << "The strongest person in class " << pair.first << " is person with id " << pair.second << '\n';
	}


	return 0;
}
