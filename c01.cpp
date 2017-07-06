#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    cout << "Hello World" << endl; 
    int a = 0;
    const double PI = 3.1415926535;
    char myGrade = 'A';
    bool isHappy = true; // or false
    int myAge = 29;
    float favNum = 3.141592;
    double otherfavNum = 1.6180339887;
    cout << "Favorite Number: " << favNum << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of short: " << sizeof(short) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;

    int largestInt = 2147483647;
    cout << "Largest int " << largestInt << endl;
    
    cout << "5 + 2 = " << 5 + 2 << endl;
    cout << "5 - 2 = " << 5 - 2 << endl;
    cout << "5 * 2 = " << 5 * 2 << endl;
    cout << "5 / 2 = " << 5 / 2 << endl;
    cout << "5 % 2 = " << 5 % 2 << endl;
    cout << "myAge++ = " << myAge++ << endl;
    
    cout << "5 % 2 = " << (float) 5 / 2 << endl;

    if (myAge >= 30) {
        cout << "You're old man!" << endl;
    }
    else {
        cout << "asdfkasdhfjkasd" << endl;
    }

    switch (myGrade) {
        case 'A':
            cout << "You have A grade!" << endl;
            break;
        case 'B':
            cout << "You are almost the best!" << endl;
            break;
        default:
            cout << "Some other value..." << endl;
            break;
    }

    return 0;
}
