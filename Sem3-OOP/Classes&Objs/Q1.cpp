/* Create a class Rectangle with data members length and breadth. Write member functions to
calculate and display the area and perimeter of the rectangle.
*/

#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float breadth;

public:
    void Dimensions(float a, float b)
    {
        length = a;
        breadth = b;
    }
    float area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return 2 * (length + breadth);
    }
    void display()
    {
        cout << "Area of Rectangle: " << area() << endl;
        cout << "Perimeter of Rectangle: " << perimeter() << endl;
    }
};
int main()
{
    Rectangle rect;
    float length, breadth;

    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;

    rect.Dimensions(length, breadth);
    rect.display();

    return 0;
}