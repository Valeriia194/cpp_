#include <iostream>
#include <string>
#include <cmath>
#include <memory>

using namespace std;

class Weapon {
public:
	virtual float GetDamage() = 0;
	virtual string GetName() = 0;

	virtual ~Weapon() {}
};

class Character {
private:
	unique_ptr<Weapon> weapon;

public:

	void SetWeapon(unique_ptr<Weapon> weapon) {
		this->weapon = move(weapon);
	};

	Weapon* GetWeapon() const {
		return weapon.get();
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
	unique_ptr<Gun> myGun = make_unique<Gun>();

	myCharacter.SetWeapon(move(myGun));
	Weapon* weapon = myCharacter.GetWeapon();

	cout << "My weapon name: " << weapon->GetName() << endl;
	cout << "Weapon damage: " << weapon->GetDamage() << endl;

	return 0;
}
