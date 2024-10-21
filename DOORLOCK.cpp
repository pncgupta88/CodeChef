#include <iostream>
#include <string>
using namespace std;

int main() {
    const string doorCode = "2345"; // Set your correct code here
    string userCode;

    cout << "Enter the door code: ";
    cin >> userCode;

    if (userCode == doorCode) {
        cout << "Correct code.\nThe door is now unlocked." << endl;
    } else {
        cout << "Incorrect code.\nThe door remains closed." << endl;
    }
    return 0;
}