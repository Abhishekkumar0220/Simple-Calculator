#include <iostream>
#include <limits>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    double result;

    cout << "Simple Calculator" << endl;
    cout << "Enter the first number: ";
    
    
    while (!(cin >> num1)) {
        cin.clear();
        cin.ignore( numeric_limits< streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a numeric value: ";
    }

    cout << "Enter the second number: ";
    
    
    while (!(cin >> num2)) {
        cin.clear(); 
        cin.ignore (numeric_limits< streamsize> :: max(), '\n'); 
        cout << "Invalid input. Please enter a numeric value: ";
    }

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "The result of " << num1 << " + " << num2 << " is " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "The result of " << num1 << " - " << num2 << " is " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "The result of " << num1 << " * " << num2 << " is " << result << endl;
            break;
        case '/':
            
            if (num2 != 0) {
                result = num1 / num2;
                cout << "The result of " << num1 << " / " << num2 << " is " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please use +, -, *, or /." << endl;
            break;
    }

    return 0;
}
