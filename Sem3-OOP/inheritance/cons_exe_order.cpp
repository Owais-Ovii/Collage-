#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Constructor\n";
    }

    ~Base()
    {
        cout << "Base Destructor\n";
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived Constructor\n";
    }

    ~Derived()
    {
        cout << "Derived Destructor\n";
    }
};

int main()
{
    Derived obj;
    return 0;
}
