#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divi(double a, double b) { return (b != 0) ? a / b : 0; }
int mod(int a, int b) { return (b != 0) ? a % b : 0; }

int main()
{
    double a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operation (+, -, *, /, %): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Result: " << add(a, b);
        break;
    case '-':
        cout << "Result: " << sub(a, b);
        break;
    case '*':
        cout << "Result: " << mul(a, b);
        break;
    case '/':
        if (b != 0)
            cout << "Result: " << divi(a, b);
        else
            cout << "Cannot divide by zero!";
        break;
    case '%':
        cout << "Result: " << mod((int)a, (int)b);
        break;
    default:
        cout << "Invalid operation!";
    }
    return 0;
}
