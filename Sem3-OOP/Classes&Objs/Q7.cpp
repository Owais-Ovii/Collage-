/* Create a class Distance with a data member in meters. Write functions to convert and display
the distance in kilometers, centimeters, and millimeters.*/

#include <iostream>
using namespace std;
class Distance
{
private:
    float meters;

public:
    void setMeters(float m)
    {
        meters = m;
    }
    float toKilometers()
    {
        return meters / 1000.0;
    }
    float toCentimeters()
    {
        return meters * 100.0;
    }
    float toMillimeters()
    {
        return meters * 1000.0;
    }
    void displayConversions()
    {
        cout << "Distance in Kilometers: " << toKilometers() << " km" << endl;
        cout << "Distance in Centimeters: " << toCentimeters() << " cm" << endl;
        cout << "Distance in Millimeters: " << toMillimeters() << " mm" << endl;
    }
};
int main()
{
    Distance dist;
    float meters;

    cout << "Enter distance in meters: ";
    cin >> meters;

    dist.setMeters(meters);
    dist.displayConversions();

    return 0;
}
