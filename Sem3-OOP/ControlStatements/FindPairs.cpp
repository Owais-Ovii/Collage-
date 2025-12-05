#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int x = 0; x * x <= n; x++)
    {
        for (int y = 0; y * y <= n; y++)
        {
            int sum = x * x + y * y;
            if (sum == n)
                cout << "(" << x << ", " << y << ")" << endl;
            else if (sum > n)
                break;
        }
    }
    return 0;
}
