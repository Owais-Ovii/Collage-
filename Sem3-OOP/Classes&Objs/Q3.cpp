/* Design a class Interest with data members principal, rate, and time. Write a function to
calculate simple interest and display the result.
*/

#include <iostream>
using namespace std;
class Interest
{
private:
    float principal;
    float rate;
    float time;

public:
    void Dimensions(float a, float b, float c)
    {
        principal = a;
        rate = b;
        time = c;
    }
    float Simple_Interest()
    {
        return (principal * rate * time) / 100;
    }
    void display()
    {
        cout << "Simple Interest: " << Simple_Interest() << endl;
    }
};
int main()
{
    Interest simp;
    float principal, rate, time;

    cout << "Enter principal rate and time: ";
    cin >> principal >> rate >> time;

    simp.Dimensions(principal, rate, time);
    simp.display();

    return 0;
}