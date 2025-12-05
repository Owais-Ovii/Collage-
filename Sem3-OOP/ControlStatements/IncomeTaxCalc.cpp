#include <iostream>
using namespace std;

int main()
{
    double income, tax = 0;
    cout << "Enter your annual income: ";
    cin >> income;

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income <= 1000000)
    {
        // 5% on 2.5L + 20% on remaining amount
        tax = (0.05 * 250000) + 0.20 * (income - 500000);
    }
    else
    {
        // 5% on 2.5L + 20% on 5L + 30% on remaining
        tax = (0.05 * 250000) + (0.20 * 500000) + 0.30 * (income - 1000000);
    }

    cout << "Income Tax = ₹" << tax;
    return 0;
}
