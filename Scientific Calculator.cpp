#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

void SetColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void LoadingScreen() {
    cout << "Loading...";
    for (int i = 0; i < 10; i++) {
        cout << ".";
        Sleep(200);
    }
    cout << endl;
}

int main() {
    double num1, num2, result;
    char operation;

    // Set console text color
    SetColor(11); // Bright cyan

    cout << "Scientific Calculator" << endl;
    cout << "Available Operations:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Square Root (sqrt)" << endl;
    cout << "6. Exponentiation (x^y)" << endl;
    cout << "7. Sine (sin)" << endl;
    cout << "8. Cosine (cos)" << endl;
    cout << "9. Tangent (tan)" << endl;
    cout << "Enter the operation number: ";
    cin >> operation;

    // Display loading screen
    LoadingScreen();

    switch (operation) {
        case '1':
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '2':
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '3':
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '4':
            cout << "Enter numerator: ";
            cin >> num1;
            cout << "Enter denominator: ";
            cin >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        case '5':
            cout << "Enter a number to find the square root: ";
            cin >> num1;
            result = sqrt(num1);
            cout << "Square Root: " << result << endl;
            break;
        case '6':
            cout << "Enter the base (x): ";
            cin >> num1;
            cout << "Enter the exponent (y): ";
            cin >> num2;
            result = pow(num1, num2);
            cout << num1 << " raised to the power of " << num2 << " is: " << result << endl;
            break;
        case '7':
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = sin(num1);
            cout << "Sine: " << result << endl;
            break;
        case '8':
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = cos(num1);
            cout << "Cosine: " << result << endl;
            break;
        case '9':
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = tan(num1);
            cout << "Tangent: " << result << endl;
            break;
        default:
            cout << "Invalid operation." << endl;
    }

    return 0;
}

