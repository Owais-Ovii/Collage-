/* Define a class Circle having radius as a data member. Implement functions to calculate the
area and circumference of the circle.
*/

#include <iostream>
#define PI 3.14
using namespace std;
class Circle
{
private:
    float radius;

public:
    void Dimensions(float a)
    {
        radius = a;
    }
    float area()
    {
        return radius * radius * PI;
    }
    float perimeter()
    {
        return 2 * PI * radius;
    }
    void display()
    {
        cout << "Area of Circle: " << area() << endl;
        cout << "Perimeter of Circle: " << perimeter() << endl;
    }
};
int main()
{
    Circle gol;
    float radius;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    gol.Dimensions(radius);
    gol.display();

    return 0;
}