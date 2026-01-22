/*
Dani Robinson
Mini Project 1
Terminal-based Calculator
*/

#include <iostream>
using namespace std;

float addition(float x,float y) {
    return x + y;
}

float subtraction(float x, float y) {
    return x - y;
}

float multiplication(float x, float y) {
    return x * y;
}

float division(float x, float y) {
    return x / y;
}

int main() {
float x, y, result;
char op;

cout << "Choose an operator(+,-,*,/): ";
cin >> op;

cout << "Enter number 1: ";
cin >> x;

cout << "Enter number 2: ";
cin >> y; 

switch (op) {
    case '+':
        result = addition(x, y);
        break;
    case '-':
        result = subtraction(x,y);
        break;
    case '*':
        result = multiplication(x, y);
        break;
    case '/':
        result = division(x, y);
        break;
    default:
        cout << "Error! Invalid operator." << endl;
        return 1;
}
cout << x << " " << op << " " << y << " = " << result << endl;

return 0;
}