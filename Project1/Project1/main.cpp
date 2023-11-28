#include <iostream>
#include <vector>
#include <string>

class Wheel {
public:
    Wheel(double diameter, std::string tireType) : diameter(diameter), tireType(tireType) {}

    double getDiameter() { return diameter; }
    std::string getTireType() { return tireType; }

private:
    double diameter;
    std::string tireType;
};

class Car {
public:
    Car(std::vector<Wheel> wheels) : wheels(wheels) {}

    void move() {
        std::cout << "Start move\n";
    }

    void stop() {
        std::cout << "Stop move\n";
    }

private:
    std::vector<Wheel> wheels;
};

int main() {
    Wheel frontLeft(17.0, "summer");
    Wheel frontRight(17.0, "summer");
    Wheel backLeft(17.0, "summer");
    Wheel backRight(17.0, "summer");

    std::vector<Wheel> wheels = { frontLeft, frontRight, backLeft, backRight };

    Car car(wheels);

    car.move();
    car.stop();

    return 0;
}