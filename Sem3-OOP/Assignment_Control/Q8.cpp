#include <iostream>
using namespace std;

int main()
{
    double amount;
    cout << "Enter purchase amount: ";
    cin >> amount;

    double discount = (amount < 100) ? 0 : (amount <= 500) ? 0.10 * amount
                                       : (amount <= 1000)  ? 0.15 * amount
                                                           : 0.20 * amount;

    cout << "Discount = " << discount << endl;
    cout << "Total after discount = " << amount - discount;
    return 0;
}
