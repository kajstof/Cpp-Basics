#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int myFavNums[5];
    int badNums[5] = {4, 13, 14, 25, 34};
    cout << "Bad number 1: " << badNums[0] << endl;
    char myName[5][5] = {{'K', 's', 'F', '!', '?'},
                         {'K', 'r', 'y', 's', 'i'}};
    cout << "2nd letter in 2nd array: " << myName[1][1] << endl;
    myName[0][2] = 'e';
    cout << "New value: " << myName[0][2] << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << myName[i][j];
        }
    }

    cout << endl;

    int randNum = (rand() % 100) + 1;
    while (randNum != 100) {
        cout << randNum << ", ";
        randNum = (rand() % 100) + 1;
    }
    cout << endl;

    string numberGuessed;
    int intNumberGuessed = 0;
    do {
        cout << "Guess between 1 and 10: ";
        getline(cin, numberGuessed);
        intNumberGuessed = stoi(numberGuessed);
        cout << intNumberGuessed << endl;
    } while (intNumberGuessed != 4);
    cout << "You win" << endl;

    char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
    string birthdayString = " Birthday";
    cout << happyArray + birthdayString << endl;
    string yourName;
    cout << "What is your name ";
    getline(cin, yourName);
    cout << "Hello " << yourName << endl;

    double eulerConstant = .57721;
    string eulerGuess;
    double eulerGuessDouble;

    cout << "What is Euler's Constant? ";
    getline(cin, eulerGuess);
    eulerGuessDouble = stod(eulerGuess);
    if (eulerGuessDouble == eulerConstant) {
        cout << "You are right" << endl;
    }
    else {
        cout << "You are wrong" << endl;
    }

    cout << "Size of String: " << eulerGuess.size() << endl;
    cout << "Is string empty: " << eulerGuess.empty() << endl;
    cout << eulerGuess.append(" was your guess") << endl;

    return 0;
}
