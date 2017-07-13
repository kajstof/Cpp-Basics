#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib>

using namespace std;

class Animal {
    public:
        virtual void makeSound() { cout << "The Animal says grr" << endl; };
};
class Dog : public Animal {
    public:
        void makeSound() { cout << "The Dog says woof" << endl; };
};
class Cat : public Animal {
    public:
        void makeSound() { cout << "The Cat says meow" << endl; };
};

class Car {
    public:
        virtual int getNumWheels() = 0;
        virtual int getNumDoors() = 0;
};
class StationWagon : public Car {
    public:
        int getNumWheels() { cout << "Station wagon has 4 wheels" << endl; };
        int getNumDoors() { cout << "Station wagon has 4 doors" << endl; };
        StationWagon() {};
        ~StationWagon();
};

int main(int argc, char *argv[]) {
    Animal * pCat = new Cat;
    Animal * pDog = new Dog;
    pCat->makeSound();
    pDog->makeSound();
    Car * stationWagon = new StationWagon();
    stationWagon->getNumWheels();
    stationWagon->getNumDoors();

    cout << "Hello World" << endl;
    cout << endl << endl;
    cout << "Dawno temu w klatce";
    cin.getline();

    cout << "ZAŻÓŁĆ GĘŚLĄ JAŹŃ" << endl;
    cout << "zażółć gęślą jaźń" << endl;
    std::cin >> iglo;

    return 0;
}
