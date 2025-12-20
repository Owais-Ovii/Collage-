
#include <iostream>
using namespace std;

class horse
{
protected:
    float position;
public:
    horse() : position(0) {}
    virtual void horse_tick()
    {
        position += 0.05;
    }
    float getPos() { return position; }
};

class comhorse : public horse
{
public:
    void horse_tick()
    {
        position += 0.08;
    }
};

int main()
{
    horse* h = new comhorse;
    for(int i = 0; i < 10; i++)
        h->horse_tick();
    cout << h->getPos();
    return 0;
}
