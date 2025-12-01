#include <iostream>
using namespace std;

int main()
{
    int d, m, y;
    cout << "Enter date (DD MM YYYY): ";
    cin >> d >> m >> y;

    bool leap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);

    if (m < 1 || m > 12)
    {
        cout << "Invalid month!";
        return 0;
    }

    int daysInMonth;
    if (m == 2)
        daysInMonth = leap ? 29 : 28;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        daysInMonth = 30;
    else
        daysInMonth = 31;

    if (d < 1 || d > daysInMonth)
    {
        cout << "Invalid day!";
        return 0;
    }

    cout << "Valid date.\n";

    int day = d, month = m, year = y;

    if (month < 3)
    {
        month += 12;
        year -= 1;
    }

    int K = year % 100; // Year of the century
    int J = year / 100; // Zero-based century
    int h = (day + (13 * (month + 1)) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;

    int dayOfWeek = ((h + 5) % 7) + 1;

    cout << "Day of the week: ";
    switch (dayOfWeek)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    }

    return 0;
}
