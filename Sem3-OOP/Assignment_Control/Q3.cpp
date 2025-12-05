#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    (op == '+') ? cout << "Result: " << a + b : (op == '-')              ? cout << "Result: " << a - b
                                            : (op == '*')                ? cout << "Result: " << a * b
                                            : (op == '/' && b != 0)      ? cout << "Result: " << a / b
                                            : (op == '%' && (int)b != 0) ? cout << "Result: " << (int)a % (int)b
                                                                         : cout << "Invalid operation or division by zero!";

    return 0;
}
