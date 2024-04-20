//Anand Tagde
//Simple Calculator using C++ Programming by implementing Switch Case method.
#include <iostream>
using namespace std;

int main() {
    float firstNumber, secondNumber, result;
    char operation;

    cout << "Enter the first number:";
    cin >> firstNumber;

    cout << "Enter the second number:";
    cin >> secondNumber;

    cout << "Choose any one of the operation (+, -, *, /):";
    cin >> operation;

    switch(operation) {
        case '+':
            result = firstNumber + secondNumber;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = firstNumber - secondNumber;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = firstNumber * secondNumber;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (secondNumber != 0) {
                result = firstNumber / secondNumber;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operation selected!" << endl;
            break;
    }

    return 0;
}

