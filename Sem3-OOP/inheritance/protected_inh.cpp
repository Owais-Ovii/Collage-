#include <iostream>
using namespace std;

class Account
{
protected:
    float balance;

public:
    Account()
    {
        balance = 0;
    }

    void input_initial_balance()
    {
        cout << "Enter initial balance: ";
        cin >> balance;
    }
};

class SavingsAccount : protected Account
{
public:
    void deposit()
    {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
    }

    void withdraw()
    {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient balance\n";
        }
    }

    void display_balance()
    {
        cout << "Current Balance: " << balance << "\n";
    }

    void start()
    {
        input_initial_balance();
        deposit();
        withdraw();
        display_balance();
    }
};

int main()
{
    SavingsAccount obj;
    obj.start();
    return 0;
}
