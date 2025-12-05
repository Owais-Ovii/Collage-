#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, product = 1, digit;
    cout << "Enter a number: ";
    cin >> n;

    int temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }

    cout << "Sum of digits = " << sum << endl;
    cout << "Product of digits = " << product;
    return 0;
}
