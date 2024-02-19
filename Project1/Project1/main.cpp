#include <iostream>
#include <vector>
#include <string>

class Human {
private:
    std::string name;
public:
    explicit Human(std::string n) : name(n) {}
    std::string getName() const { return name; }
};

class Apartment {
private:
    std::vector<Human> humans;
public:
    void addHuman(Human h) { humans.push_back(h); }
    size_t getNumberOfHumans() const { return humans.size(); }
};

class Building {
private:
    std::vector<Apartment> apartments;
public:
    void addApartment(Apartment a) { apartments.push_back(a); }
    size_t getNumberOfApartments() const { return apartments.size(); }
};

int main() {
    Human h1("Human1");
    Human h2("Human2");

    Apartment a1;
    a1.addHuman(h1);
    a1.addHuman(h2);

    Building b1;
    b1.addApartment(a1);

    std::cout << "Number of apartments in building: " << b1.getNumberOfApartments() << std::endl;
    std::cout << "Number of humans in apartment: " << a1.getNumberOfHumans() << std::endl;

    return 0;
}
