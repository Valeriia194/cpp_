//LW 1
//____________________________________________________________________________________

//#include <iostream>
//#include <string>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//class Passport {
//protected:
//	string name;
//	string surname;
//	int id;
//public:
//	Passport(string _name, string _surname, int _id) : name(_name), surname(_surname), id(_id) {
//
//	}
//};
//
//class ForeignPassport : public Passport {
//private:
//	int foreignId;
//	vector <string> visas;
//public:
//	ForeignPassport (string _name, string _surname, int _id, int _foreignId) : Passport(name, surname, id), foreignId(_foreignId)
//	{
//	}
//	void addVisa(string visa) {
//		visas.push_back(visa);
//	}
//};
//
//int main() 
//{
//
//
//	return 0;
//}


//LW 2
//____________________________________________________________________________________

//#include <iostream>
//#include <string>
//#include <cmath>
//#include <vector>
//
//using namespace std;

//class Transport {
//public:
//    virtual double calculateTime(double distance) = 0; 
//    virtual double calculateCost(double weight) = 0; 
//};
//
//class Car : public Transport {
//public:
//    double calculateTime(double distance) override {
//        double speed = 60.0; 
//        return distance / speed;
//    }
//    double calculateCost(double weight) override {
//        double costPerKg = 2.0; 
//        return weight * costPerKg;
//    }
//};
//
//
//class Bicycle : public Transport {
//public:
//    double calculateTime(double distance) override {
//        double speed = 15.0; 
//        return distance / speed;
//    }
//    double calculateCost(double weight) override {
//        return 0.0; 
//    }
//};
//
//class Wagon : public Transport {
//public:
//    double calculateTime(double distance) override {
//        double speed = 5.0; 
//        return distance / speed;
//    }
//    double calculateCost(double weight) override {
//        double costPerKg = 1.0;
//        return weight * costPerKg;
//    }
//};
//
//int main() {
//
//    return 0;
//}

//HW 1
//____________________________________________________________________________________

//#include <iostream>
//#include <string>
//#include <cmath>
//#include <vector>
//
//using namespace std;

//class Student {
//protected:
//    string name;
//    string surname;
//    string university;
//public:
//    Student(string name, string surname, string university)
//        : name(name), surname(surname), university(university) {}
//
//};
//
//
//class Aspirant : public Student {
//private:
//    string thesisTopic; 
//public:
//    Aspirant(string name, string surname, string university, string thesis)
//        : Student(name, surname, university), thesisTopic(thesis) {}
//
//};


//HW 2
//____________________________________________________________________________________

//#include <iostream>
//#include <string>
//#include <cmath>
//#include <vector>
//
//using namespace std;


//class Pet {
//protected:
//    string name;
//    string characteristics;
//public:
//    Pet(string name, string characteristics)
//        : name(name), characteristics(characteristics) {}
//
//};
//
//
//class Dog : public Pet {
//public:
//    Dog(string name, string characteristics)
//        : Pet(name, characteristics) {}
//
//};
//
//
//class Cat : public Pet {
//public:
//    Cat(std::string name, std::string characteristics)
//        : Pet(name, characteristics) {}
//
//};
//
//
//class Parrot : public Pet {
//public:
//    Parrot(string name, string characteristics)
//        : Pet(name, characteristics) {}
//
//};
//
//int main() {
//
//    return 0;
//}
