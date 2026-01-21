/*
Dani Robinson
In Class Work #2
1/18/26
*/

#include <iostream>
#include <string>
using namespace std;

// Task 1: Asks user for length of secret sequence
int main() { 
    int length;
    cout << "How many numbers appear in your secret sequence? ";
    cin >> length;

    if (length < 1) {// Invalid if user puts a 0 or a negative number. Exits Program.
        cout << "Invalid!" << endl;
        return 0;
}

int number;
string secretsq = "";

// Task 2: Loops through secret sequence
for (int i = 0; i < length; i++) {
    cout << "Enter Number(1-26): ";
    cin >> number;

    // Valid numbers replaced with correct letters
    if (number >= 1 && number <= 26) {
        char letter = 'A' + number - 1;
        secretsq += letter;
    }
    // Invalid numbers replaced with '?'
    else {
        secretsq += '?';
    }
}

// Task 3: Output secret sequence

cout << "Secret Sequence: " << secretsq << endl;

return 0;
}