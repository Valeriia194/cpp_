// Labor 1
//______________________________________________________

//#include <iostream>
//#include <string>
//
//class Student {
//private:
//    std::string fullName;
//    std::string birthDate;
//    std::string phoneNumber;
//    std::string city;
//    std::string country;
//    std::string schoolName;
//
//public:
//
//    Student(std::string fullName, std::string birthDate, std::string phoneNumber, std::string city, std::string country, std::string schoolName) {
//        this->fullName = fullName;
//        this->birthDate = birthDate;
//        this->phoneNumber = phoneNumber;
//        this->city = city;
//        this->country = country;
//        this->schoolName = schoolName;
//    }
//
//    std::string getFullName() { return fullName; }
//    std::string getBirthDate() { return birthDate; }
//    std::string getPhoneNumber() { return phoneNumber; }
//    std::string getCity() { return city; }
//    std::string getCountry() { return country; }
//    std::string getSchoolName() { return schoolName; }
//
//
//    void setFullName(std::string fullName) { this->fullName = fullName; }
//    void setBirthDate(std::string birthDate) { this->birthDate = birthDate; }
//    void setPhoneNumber(std::string phoneNumber) { this->phoneNumber = phoneNumber; }
//    void setCity(std::string city) { this->city = city; }
//    void setCountry(std::string country) { this->country = country; }
//    void setSchoolName(std::string schoolName) { this->schoolName = schoolName; }
//
//
//    void displayInfo() {
//        std::cout << "Full Name: " << fullName << std::endl;
//        std::cout << "Birth Date: " << birthDate << std::endl;
//        std::cout << "Phone Number: " << phoneNumber << std::endl;
//        std::cout << "City: " << city << std::endl;
//        std::cout << "Country: " << country << std::endl;
//        std::cout << "School Name: " << schoolName << std::endl;
//    }
//};
//
//
//
//int main() {
//  
//    Student student("John Doe", "2000-01-01", "+1234567890", "New York", "USA", "XYZ University");
//
//
//    student.setFullName("Jane Doe");
//    student.setPhoneNumber("+0987654321");
//
// 
//    std::cout << "Full Name: " << student.getFullName() << std::endl;
//    std::cout << "Phone Number: " << student.getPhoneNumber() << std::endl;
//
//    student.displayInfo();
//
//    return 0;
//}


// Task 1
//__________________________________________________________________

//#include <iostream>
//#include <vector>
//#include <string>
//
//class Contact {
//public:
//    std::string name;
//    std::string homePhone;
//    std::string workPhone;
//    std::string mobilePhone;
//    std::string additionalInfo;
//
//    Contact(std::string name, std::string homePhone, std::string workPhone, std::string mobilePhone, std::string additionalInfo)
//        : name(name), homePhone(homePhone), workPhone(workPhone), mobilePhone(mobilePhone), additionalInfo(additionalInfo) {}
//
//    void display() const {
//        std::cout << "Name: " << name << "\nHome Phone: " << homePhone << "\nWork Phone: " << workPhone
//            << "\nMobile Phone: " << mobilePhone << "\nAdditional Info: " << additionalInfo << std::endl;
//    }
//};
//
//class PhoneBook {
//private:
//    std::vector<Contact> contacts;
//
//public:
//    void addContact(const Contact& contact) {
//        contacts.push_back(contact);
//    }
//
//    void removeContact(const std::string& name) {
//        for (int i = 0; i < contacts.size(); i++) {
//            if (contacts[i].name == name) {
//                contacts.erase(contacts.begin() + i);
//                return;
//            }
//        }
//        std::cout << "Contact not found." << std::endl;
//    }
//
//    void searchContact(const std::string& name) const {
//        for (const auto& contact : contacts) {
//            if (contact.name == name) {
//                contact.display();
//                return;
//            }
//        }
//        std::cout << "Contact not found." << std::endl;
//    }
//
//    void displayAllContacts() const {
//        for (const auto& contact : contacts) {
//            contact.display();
//            std::cout << "-------------------" << std::endl;
//        }
//    }
//};
//
//int main() {
//    PhoneBook phoneBook;
//    phoneBook.addContact(Contact("John Doe", "123-456-7890", "098-765-4321", "456-789-0123", "Friend from school"));
//    phoneBook.addContact(Contact("Jane Smith", "321-654-0987", "789-012-3456", "654-321-9870", "Work colleague"));
//    phoneBook.displayAllContacts();
//    phoneBook.searchContact("John Doe");
//    phoneBook.removeContact("Jane Smith");
//    phoneBook.displayAllContacts();
//
//    return 0;
//}


// Task 2
//__________________________________________________________________

#include <iostream>

class String {
private:
    char* str;
    static int count;

public:

    String() : String(80) {}


    String(int size) {
        str = new char[size + 1];
        str[0] = '\0';
        count++;
    }


    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy_s(str, strlen(s) + 1, s);
        count++;
    }


    ~String() {
        delete[] str;
        count--;
    }


    void input() {
        std::cin.getline(str, strlen(str));
    }


    void output() const {
        std::cout << str << std::endl;
    }


    static int getCount() {
        return count;
    }
};

int String::count = 0;

int main() {
    String s1;
    std::cout << "Enter a string: ";
    s1.input();
    s1.output();

    String s2(100);
    std::cout << "Enter another string: ";
    s2.input();
    s2.output();

    std::cout << "Number of created string objects: " << String::getCount() << std::endl;

    return 0;
}

