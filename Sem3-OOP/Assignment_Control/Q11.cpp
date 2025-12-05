#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int s = n - i; s > 0; s--)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << j;
        for (int j = i - 1; j >= 1; j--)
            cout << j;
        cout << endl;
    }
    return 0;
}
