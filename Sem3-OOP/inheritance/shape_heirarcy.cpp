#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() = 0;
};

class Circle : public Shape
{
    float radius;

public:
    void input_circle()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    float area()
    {
        return 3.14159f * radius * radius;
    }
};

class Rectangle : public Shape
{
    float length;
    float breadth;

public:
    void input_rectangle()
    {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }

    float area()
    {
        return length * breadth;
    }
};

class Triangle : public Shape
{
    float base_value;
    float height_value;

public:
    void input_triangle()
    {
        cout << "Enter base and height: ";
        cin >> base_value >> height_value;
    }

    float area()
    {
        return 0.5f * base_value * height_value;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    Triangle t;

    c.input_circle();
    cout << "Circle Area: " << c.area() << "\n";

    r.input_rectangle();
    cout << "Rectangle Area: " << r.area() << "\n";

    t.input_triangle();
    cout << "Triangle Area: " << t.area() << "\n";

    return 0;
}
