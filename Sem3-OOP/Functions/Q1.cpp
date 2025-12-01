/* Write a program to demonstrate call by value by defining a function swapValue(int a, int
b) that swaps two integers. Show that the swap does not affect the original variables in
main(). */

#include <iostream>
using namespace std;
void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapValue function: a = " << a << ", b = " << b << endl;
}
int main()
{
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Before swapValue function: x = " << x << ", y = " << y << endl;
    swapValue(x, y);
    cout << "After swapValue function: x = " << x << ", y = " << y << endl;

    return 0;
}