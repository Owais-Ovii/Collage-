/* Write a program that swaps two numbers using call by pointers. The function should
accept two integer pointers and perform the swap using dereferencing.*/

#include <iostream>
using namespace std;
void swapPointers(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "Inside swapPointers function: x = " << *x << ", y = " << *y << endl;
}
int main()
{
    int m, n;
    cout << "Enter two integers: ";
    cin >> m >> n;

    cout << "Before swapPointers function: m = " << m << ", n = " << n << endl;
    swapPointers(&m, &n);
    cout << "After swapPointers function: m = " << m << ", n = " << n << endl;

    return 0;
}
