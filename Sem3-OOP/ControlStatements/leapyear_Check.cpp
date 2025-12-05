#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year <= 0)
        cout << "Invalid year!";
    else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << year << " is a Leap Year";
    else
        cout << year << " is Not a Leap Year";

    return 0;
}
