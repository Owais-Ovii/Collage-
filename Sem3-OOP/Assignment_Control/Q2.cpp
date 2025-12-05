#include <iostream>
using namespace std;

int main()
{
    int marks[5], failCount = 0, total = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks in subject " << i + 1 << ": ";
        cin >> marks[i];
        if (marks[i] < 40)
            failCount++;
        total += marks[i];
    }

    double percentage = total / 5.0;

    if (failCount > 1)
        cout << "Repeat Year";
    else
    {
        if (percentage >= 90)
            cout << "Grade A";
        else if (percentage >= 75)
            cout << "Grade B";
        else if (percentage >= 60)
            cout << "Grade C";
        else if (percentage >= 45)
            cout << "Grade D";
        else
            cout << "Grade F";
    }

    return 0;
}
