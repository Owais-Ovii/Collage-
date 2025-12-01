/* Define a class Box with data members length, width, and height. Write a member function to
compute and display the volume of the box.*/

#include <iostream>
using namespace std;
class Box
{
private:
    float length;
    float width;
    float height;

public:
    void Dimensions(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;
    }
    float volume()
    {
        return length * width * height;
    }
    void display()
    {
        cout << "Volume of Box: " << volume() << endl;
    }
};
int main()
{
    Box box;
    float length, width, height;

    cout << "Enter length, width and height of the box: ";
    cin >> length >> width >> height;

    box.Dimensions(length, width, height);
    box.display();

    return 0;
}