#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    vector <int> lotteryNumVect(10);
    int lotteryNumArray[5] = {4, 13, 14, 24, 34};
    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);
    cout << lotteryNumVect.at(2) << endl;   // Output: 14
    lotteryNumVect.insert(lotteryNumVect.begin() + 5, 44);
    cout << lotteryNumVect.at(5) << endl;   // Output: 44
    lotteryNumVect.push_back(64);           // Add value at the end of vector
    cout << "Size: " << lotteryNumVect.size() << endl;
    cout << "Final Value: " << lotteryNumVect.back() << endl;
    lotteryNumVect.pop_back();              // Get last element of vector
    cout << "Final Value: " << lotteryNumVect.back() << endl;
    cout << "First Value: " << lotteryNumVect.front() << endl;
    cout << "Empty vector?: " << lotteryNumVect.empty() << endl;

    return 0;
}
