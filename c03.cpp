#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string yourName;
    cout << "What is your name: ";

    getline(cin, yourName);
    string dogString = "dog";
    string catString = "cat";

    cout << dogString.compare(catString) << endl;
    cout << dogString.compare(dogString) << endl;
    cout << catString.compare(dogString) << endl;

    cout << "Hello " << yourName << endl;
    string wholeName = yourName.assign(yourName);
    cout << wholeName << endl;
    string firstName = wholeName.assign(wholeName, 0, 5);
    cout << firstName << endl;
    int lastNameIndex = yourName.find("Krysiak", 0);
    cout << "Index for last name: " << lastNameIndex << endl;

    yourName.insert(9, " Krysiak");
    cout << yourName << endl;
    yourName.erase(10, 8);
    cout << yourName << endl;
    yourName.replace(10, 7, "Maximus");
    cout << yourName << endl;

    return 0;
}
