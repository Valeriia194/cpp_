#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Weapon {

	public:
		virtual float GetDamage() = 0;
		virtual string GetName() = 0;

		virtual ~Weapon() {}
};

class Character {
	private:
		Weapon* weapon;

	public:

		void SetWeapon(Weapon* weapon) {
			this->weapon = weapon;
		};

		Weapon* GetWeapon() const {
			return weapon;
		};
};

class Gun : public Weapon {
	public:
		float GetDamage() override {
			return 20.0f;
		}

		string GetName() override {
			return "Gun";
		}
};



int main() 
{

	Character myCharacter;
	Gun* myGun = new Gun;

	myCharacter.SetWeapon(myGun);
	Weapon* weapon = myCharacter.GetWeapon();

	cout << "My weapon name: " << (*weapon).GetName() << endl;
	cout << "Weapon damage: " << weapon->GetDamage() << endl;

	delete myGun;

	return 0;
}
