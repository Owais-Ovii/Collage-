// This program determines the nature of the roots of a quadratic equation using nested ternary operators.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, d;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    (a == 0) ? cout << "Invalid! Coefficient 'a' cannot be zero." : (d = b * b - 4 * a * c, (d > 0) ? cout << "Roots are real and distinct." : (d == 0) ? cout << "Roots are real and equal."
                                                                                                                                                        : cout << "Roots are imaginary.");

    return 0;
}
