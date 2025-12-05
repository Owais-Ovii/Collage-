#include <iostream>
using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Enter a positive integer : ";
        cin >> n;
        if (n == 0)
            break;

        int rev = 0, temp = n;
        while (temp != 0)
        {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        cout << "Reversed number: " << rev << endl;
    } while (n != 0);

    cout << "Program ended.";
    return 0;
}
