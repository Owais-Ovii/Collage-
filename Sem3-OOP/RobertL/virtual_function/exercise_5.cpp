
#include <iostream>
using namespace std;

class bMoney
{
    long double amount;
public:
    bMoney(long double a = 0) : amount(a) {}
    friend bMoney operator*(long double, bMoney);
    friend bMoney operator/(long double, bMoney);
    void show()
    {
        cout << amount << endl;
    }
};

bMoney operator*(long double x, bMoney m)
{
    return bMoney(x * m.amount);
}

bMoney operator/(long double x, bMoney m)
{
    return bMoney(x / m.amount);
}

int main()
{
    bMoney m(50);
    (2.0 * m).show();
    (100.0 / m).show();
    return 0;
}
