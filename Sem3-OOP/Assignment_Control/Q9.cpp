#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0, temp, start, end;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == n)
        cout << n << " is a palindrome.";
    else
        cout << n << " is not a palindrome.";

    cout << "\nEnter range (start end): ";
    cin >> start >> end;
    cout << "Palindromes between " << start << " and " << end << ": ";
    for (int i = start; i <= end; i++)
    {
        int r = 0, t = i;
        while (t != 0)
        {
            r = r * 10 + t % 10;
            t /= 10;
        }
        if (r == i)
            cout << i << " ";
    }
    return 0;
}
