/* Write overloaded functions named display() that accept:
 An integer
 A float
 A string
Demonstrate how function overloading works with different data types and how
the compiler resolves which function to call.*/

#include <iostream>
#include <string>
using namespace std;
void display(int num)
{
    cout << "Integer: " << num << endl;
}
void display(float num)
{
    cout << "Float: " << num << endl;
}
void display(const string &str)
{
    cout << "String: " << str << endl;
}
int main()
{
    int intValue;
    float floatValue;
    string stringValue;
    string tmp;

    cout << "Enter an integer: ";
    getline(cin, tmp);
    intValue = stoi(tmp);
    display(intValue);

    cout << "Enter a float: ";
    getline(cin, tmp);
    floatValue = stof(tmp);
    display(floatValue);

    cout << "Enter a string: ";
    getline(cin, stringValue);
    display(stringValue);

    return 0;
}