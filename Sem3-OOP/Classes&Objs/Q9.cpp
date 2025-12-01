/* Write a class ElectricityBill with data members for consumer name, units consumed, and
charge per unit. Implement a function to calculate the total bill amount and display it.*/

#include <iostream>
using namespace std;
class Electricity
{
private:
    string consumerName;
    float unitsConsumed;
    float chargePerUnit;
    float totalBill;

public:
    void inputDetails(string name, float units, float charge)
    {
        consumerName = name;
        unitsConsumed = units;
        chargePerUnit = charge;
    }
    void calculateBill()
    {
        totalBill = unitsConsumed * chargePerUnit;
    }
    void displayBill()
    {
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Charge per Unit: " << chargePerUnit << endl;
        cout << "Total Bill Amount: " << totalBill << endl;
    }
};
int main()
{
    Electricity bill;
    string name;
    float units, charge;

    cout << "Enter consumer name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter units consumed: ";
    cin >> units;
    cout << "Enter charge per unit: ";
    cin >> charge;

    bill.inputDetails(name, units, charge);
    bill.calculateBill();
    bill.displayBill();

    return 0;
}
