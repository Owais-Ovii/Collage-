#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int choice;
    do
    {
        cout << "\n1. Factorial\n2. GCD\n3. LCM\n4. Exit\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int n;
            cout << "Enter number: ";
            cin >> n;
            cout << "Factorial = " << factorial(n);
        }
        else if (choice == 2)
        {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "GCD = " << gcd(a, b);
        }
        else if (choice == 3)
        {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "LCM = " << lcm(a, b);
        }
        else if (choice == 4)
            cout << "Exiting program...";
        else
            cout << "Invalid choice!";
    } while (choice != 4);

    return 0;
}
