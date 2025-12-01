/* Write a function void findMinMax(int *arr, int n, int &min, int &max) that uses pointers
and references to find the minimum and maximum elements in an array. The main
function should pass the array and display the results.
*/

#include <iostream>
using namespace std;
void findMinMax(int *arr, int n, int &min, int &max)
{
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int min, max;
    findMinMax(arr, n, min, max);

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    delete[] arr;
    return 0;
}