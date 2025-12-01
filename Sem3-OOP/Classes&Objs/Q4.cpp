/* Create a class Temperature to convert Celsius to Fahrenheit and Fahrenheit to Celsius using
appropriate formulas and member functions.
*/

#include <iostream>
using namespace std;
class Temperature
{
private:
    float celsius;
    float fahrenheit;

public:
    void setCelsius(float c)
    {
        celsius = c;
    }
    void setFahrenheit(float f)
    {
        fahrenheit = f;
    }
    float toFahrenheit()
    {
        return (celsius * 9 / 5) + 32;
    }
    float toCelsius()
    {
        return (fahrenheit - 32) * 5 / 9;
    }
    void displayFromCelsius()
    {
        cout << celsius << " Celsius is " << toFahrenheit() << " Fahrenheit." << endl;
    }
    void displayFromFahrenheit()
    {
        cout << fahrenheit << " Fahrenheit is " << toCelsius() << " Celsius." << endl;
    }
};
int main()
{
    Temperature temp;
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    temp.setCelsius(celsius);
    temp.displayFromCelsius();

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    temp.setFahrenheit(fahrenheit);
    temp.displayFromFahrenheit();

    return 0;
}