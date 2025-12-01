/* WWrite a class Average with three integer data members. Include member functions to input the
numbers and calculate their average.
*/

#include <iostream>
using namespace std;
class Average
{
private:
    int num1;
    int num2;
    int num3;
    float avg;

public:
    void inputNumbers(int a, int b, int c)
    {
        num1 = a;
        num2 = b;
        num3 = c;
    }
    void calculateAverage()
    {
        avg = (num1 + num2 + num3) / 3.0;
    }
    void displayAverage()
    {
        cout << "Average: " << avg << endl;
    }
};
int main()
{
    Average avg;
    int a, b, c;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    avg.inputNumbers(a, b, c);
    avg.calculateAverage();
    avg.displayAverage();

    return 0;
}
