// LW
//_________________________________________________________________________

//#include <iostream>
//#include <vector>
//#include <string>
//
//class Book {
//private:
//    std::string author;
//    std::string title;
//    std::string publisher;
//    int year;
//    int pages;
//
//public:
//    explicit Book(std::string a, std::string t, std::string p, int y, int pg)
//        : author(a), title(t), publisher(p), year(y), pages(pg) {}
//
//    std::string getAuthor() const { return author; }
//    std::string getTitle() const { return title; }
//    std::string getPublisher() const { return publisher; }
//    int getYear() const { return year; }
//    int getPages() const { return pages; }
//
//    void display() const {
//        std::cout << "Author: " << author << "\n"
//            << "Title: " << title << "\n"
//            << "Publisher: " << publisher << "\n"
//            << "Year: " << year << "\n"
//            << "Pages: " << pages << "\n";
//    }
//};
//
//void displayBooksByAuthor(const std::vector<Book>& books, const std::string& author) {
//    for (const auto& book : books) {
//        if (book.getAuthor() == author) {
//            book.display();
//        }
//    }
//}
//
//void displayBooksByPublisher(const std::vector<Book>& books, const std::string& publisher) {
//    for (const auto& book : books) {
//        if (book.getPublisher() == publisher) {
//            book.display();
//        }
//    }
//}
//
//void displayBooksAfterYear(const std::vector<Book>& books, int year) {
//    for (const auto& book : books) {
//        if (book.getYear() > year) {
//            book.display();
//        }
//    }
//}
//
//int main() {
//    std::vector<Book> books = {
//        Book("Author1", "Title1", "Publisher1", 2000, 100),
//        Book("Author2", "Title2", "Publisher2", 2005, 200),
//        Book("Author1", "Title3", "Publisher1", 2010, 300),
//    };
//
//    displayBooksByAuthor(books, "Author1");
//    displayBooksByPublisher(books, "Publisher1");
//    displayBooksAfterYear(books, 2005);
//
//    return 0;
//}


// HW 
//_________________________________________________________________________

#include <iostream>
#include <vector>
#include <string>

class Reservoir {
private:
    std::string name;
    std::string type;
    double width;
    double length;
    double maxDepth;

public:
    explicit Reservoir(std::string n, std::string t, double w, double l, double d)
        : name(n), type(t), width(w), length(l), maxDepth(d) {}

    Reservoir() : name(""), type(""), width(0), length(0), maxDepth(0) {}

    Reservoir(const Reservoir& other)
        : name(other.name), type(other.type), width(other.width), length(other.length), maxDepth(other.maxDepth) {}


    void setName(std::string n) { name = n; }
    void setType(std::string t) { type = t; }
    void setWidth(double w) { width = w; }
    void setLength(double l) { length = l; }
    void setMaxDepth(double d) { maxDepth = d; }

    std::string getName() const { return name; }
    std::string getType() const { return type; }
    double getWidth() const { return width; }
    double getLength() const { return length; }
    double getMaxDepth() const { return maxDepth; }


    double approximateVolume() const { return width * length * maxDepth; }


    double surfaceArea() const { return width * length; }


    bool isSameType(const Reservoir& other) const { return type == other.type; }


    bool isLargerSurfaceArea(const Reservoir& other) const {
        if (isSameType(other)) {
            return surfaceArea() > other.surfaceArea();
        }
        return false;
    }

    void display() const {
        std::cout << "Name: " << name << "\n"
            << "Type: " << type << "\n"
            << "Width: " << width << "\n"
            << "Length: " << length << "\n"
            << "Max Depth: " << maxDepth << "\n";
    }
};

int main() {
    std::vector<Reservoir> reservoirs = {
        Reservoir("Reservoir1", "Lake", 100.0, 200.0, 50.0),
        Reservoir("Reservoir2", "Lake", 150.0, 250.0, 60.0),
        Reservoir("Reservoir3", "Pond", 50.0, 100.0, 20.0),
    };

    for (const auto& reservoir : reservoirs) {
        reservoir.display();
    }

    return 0;
}
