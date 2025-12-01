/* Write overloaded functions named area() to compute:
 Area of a circle (given radius)
 Area of a rectangle (given length and breadth)
 Area of a triangle (given base and height)
*/

#include <iostream>
using namespace std;
const float PI = 3.14;
float area(float radius)
{
    return PI * radius * radius;
}
float area(float length, float breadth)
{
    return length * breadth;
}
float areaTriangle(float base, float height)
{
    return 0.5f * base * height;
}
int main()
{
    float radius, length, breadth, base, height;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;

    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << area(length, breadth) << endl;

    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << areaTriangle(base, height) << endl;

    return 0;
}