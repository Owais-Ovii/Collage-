
#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0) {}
    Distance(float flt)
    {
        feet = int(flt);
        inches = (flt - feet) * 12;
    }
    friend Distance operator*(float, Distance);
    void show()
    {
        cout << feet << " " << inches << endl;
    }
};

Distance operator*(float f, Distance d)
{
    float total = f * (d.feet + d.inches/12);
    return Distance(total);
}

int main()
{
    Distance d1(5.5);
    Distance d2 = 7.5 * d1;
    d2.show();
    return 0;
}
