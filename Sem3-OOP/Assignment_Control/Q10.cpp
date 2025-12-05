#include <iostream>
using namespace std;

int main()
{
    double balance = 0, amount;
    int choice;

    do
    {
        cout << "\n1. Deposit\n2. Withdraw\n3. Balance Inquiry\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount > 0)
                balance += amount;
            else
                cout << "Invalid amount!";
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount <= balance && amount > 0)
                balance -= amount;
            else
                cout << "Insufficient balance or invalid amount!";
            break;
        case 3:
            cout << "Current balance: " << balance;
            break;
        case 4:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid choice!";
        }
    } while (choice != 4);

    return 0;
}
