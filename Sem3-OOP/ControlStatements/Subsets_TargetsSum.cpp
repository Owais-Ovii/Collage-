#include <iostream>
using namespace std;

int main()
{
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[20];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter target sum: ";
    cin >> target;

    cout << "Subsets with sum " << target << ":\n";
    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        cout << "[ ";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += arr[j];
                cout << arr[j] << " ";
            }
        }
        cout << "]";
        if (sum == target)
            cout << " <- Target Sum";
        cout << endl;
    }
    return 0;
}
