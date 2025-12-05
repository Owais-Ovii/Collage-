#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a Leap Year";
            else
                cout << year << " is Not a Leap Year";
        }
        else
            cout << year << " is a Leap Year";
    }
    else
    {
        cout << year << " is Not a Leap Year\nNext 5 Leap Years: ";
        int count = 0;
        while (count < 5)
        {
            year++;
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                cout << year << " ";
                count++;
            }
        }
    }

    return 0;
}
