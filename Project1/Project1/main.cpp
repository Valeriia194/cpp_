// TASK 1
//_____________________________________________________________

//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//struct Book {
//    std::string title;
//    std::string author;
//    std::string publisher;
//    std::string genre;
//};
//
//void printBook(const Book& book) {
//    std::cout << "Title: " << book.title << "\n";
//    std::cout << "Author: " << book.author << "\n";
//    std::cout << "Publisher: " << book.publisher << "\n";
//    std::cout << "Genre: " << book.genre << "\n\n";
//}
//
//void printAllBooks(const std::vector<Book>& books) {
//    for (const auto& book : books) {
//        printBook(book);
//    }
//}
//
//Book* findBookByTitle(std::vector<Book>& books, const std::string& title) {
//    for (auto& book : books) {
//        if (book.title == title) {
//            return &book;
//        }
//    }
//    return nullptr;
//}
//
//// Функція-предикат для порівняння книг за назвою
//bool compareBooks(const Book& a, const Book& b) {
//    return a.title < b.title;
//}
//
//void sortBooksByTitle(std::vector<Book>& books) {
//    std::sort(books.begin(), books.end(), compareBooks);
//}
//
//
//int main() {
//    std::vector<Book> books = {
//        {"Book 1", "Author 1", "Publisher 1", "Genre 1"},
//        {"Book 2", "Author 2", "Publisher 2", "Genre 2"},
//        {"Book 3", "Author 3", "Publisher 3", "Genre 3"}
//    };
//
//    // Редагувати книгу
//    Book* book = findBookByTitle(books, "Book 1");
//    if (book != nullptr) {
//        book->author = "New author";
//    }
//
//    // Друк усіх книг
//    printAllBooks(books);
//
//    // Пошук книги за назвою
//    book = findBookByTitle(books, "Book 2");
//    if (book != nullptr) {
//        printBook(*book);
//    }
//
//    // Сортування масиву за назвою книг
//    sortBooksByTitle(books);
//    printAllBooks(books);
//
//    return 0;
//}


// TASK 2
//_____________________________________________________________

#include <iostream>
#include <string>

struct Animal {
    std::string name;
    std::string animalClass;
    std::string nickname;
};

void fillAnimal(Animal& animal, const std::string& name, const std::string& animalClass, const std::string& nickname) {
    animal.name = name;
    animal.animalClass = animalClass;
    animal.nickname = nickname;
}

void printAnimal(const Animal& animal) {
    std::cout << "Name: " << animal.name << "\n";
    std::cout << "Class: " << animal.animalClass << "\n";
    std::cout << "Nickname: " << animal.nickname << "\n\n";
}

void makeSound(const Animal& animal) {
    if (animal.animalClass == "Dog") {
        std::cout << animal.nickname << " say: Bark-bark!" << "\n";
    }
    else if (animal.animalClass == "Cat") {
        std::cout << animal.nickname << " say: Maw-maw!" << "\n";
    }
    else {
        std::cout << "Dont know what it say " << animal.name << "\n";
    }
}

int main() {
    Animal dog;
    fillAnimal(dog, "Dog", "Dog", "Rex");
    printAnimal(dog);
    makeSound(dog);

    Animal cat;
    fillAnimal(cat, "Cat", "Cat", "Maw");
    printAnimal(cat);
    makeSound(cat);

    return 0;
}
