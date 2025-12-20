
#include <iostream>
#include <cmath>
using namespace std;

class bMoney
{
    long double amount;
public:
    bMoney(long double a = 0) : amount(a) {}
    friend bMoney round(bMoney);
    void show()
    {
        cout << amount << endl;
    }
};

bMoney round(bMoney m)
{
    long double ip;
    long double frac = modfl(m.amount, &ip);
    if(frac >= 0.5)
        ip += 1.0;
    return bMoney(ip);
}

int main()
{
    bMoney m1(10.75);
    round(m1).show();
    return 0;
}
