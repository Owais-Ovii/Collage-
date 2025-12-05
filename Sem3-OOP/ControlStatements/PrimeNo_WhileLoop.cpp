#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int main()
{
    int n, i = 2;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << ": ";
    while (i <= n)
    {
        if (isPrime(i))
            cout << i << " ";
        i++;
    }
    return 0;
}
