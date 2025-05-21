#include<bits/stdc++.h>
using namespace std;
//create a class
class Calculator{
private:
    double a, b;
    string operation;

public:
    // constructor -> to initialize the value
    Calculator(double val1, double val2, string ops) {
        a = val1;
        b = val2;
        operation = ops;
    }
    // member function -> to perform operation
    void calculate() {
        if (operation == "addition") {
            cout << "Result: " << (a + b) << endl;
        } 
        else if (operation == "subtraction") {
            cout << "Result: " << (a - b) << endl;
        } 
        else if (operation == "multiplication") {
            cout << "Result: " << (a * b) << endl;
        } 
        else if (operation == "division") {
            if (b != 0) cout << "Result: " << (a / b) << endl;
            else cout << "Error:Result will be infinte" << endl;
        }
        else {
            cout << "Please fill a valid operation" << endl;
        }
    }
};
int main() {
    // take the input from user
    double a, b;
    string op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter the operation (addition, subtraction, multiplication, division): ";
    cin >> op;
    // make the object of class calculator
    Calculator c (a, b, op);
    c.calculate();
    return 0;
}
