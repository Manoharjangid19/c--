#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    // Input first number
    cout << "Enter first number: ";
    cin >> num1;

    // Input operation
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    // Input second number
    cout << "Enter second number: ";
    cin >> num2;

    // Perform operation and display result
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result;
            } else {
                cout << "Error! Division by zero is not allowed.";
            }
            break;
        default:
            cout << "Invalid operation!";
    }

    return 0;
}
