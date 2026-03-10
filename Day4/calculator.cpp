#include <iostream>
using namespace std;

class Calculator {
    double num1, num2;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    void add() { cout << "Addition: " << num1 + num2 << endl; }

    void subtract() { cout << "Subtraction: " << num1 - num2 << endl; }

    void multiply() { cout << "Multiplication: " << num1 * num2 << endl; }
    void divide()
     {
        if (num2 != 0) cout << "Division: " << num1 / num2 << endl;
        else cout << "Division by zero not allowed!" << endl;
    }
    void square() 
    {
        cout << "Square of num1: " << num1 * num1 << endl;
        cout << "Square of num2: " << num2 * num2 << endl;
    }
};

int main() {
    Calculator calc;
    calc.input();
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();
    calc.square();
    return 0;