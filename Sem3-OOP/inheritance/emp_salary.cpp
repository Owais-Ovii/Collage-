#include <iostream>
using namespace std;

class Employee
{
protected:
    string employee_name;
    int employee_id;

public:
    void input_employee()
    {
        cout << "Enter employee name: ";
        cin >> employee_name;

        cout << "Enter employee ID: ";
        cin >> employee_id;
    }
};

class Salary : public Employee
{
    float basic_salary;
    float da;
    float hra;
    float pf;

public:
    void input_salary()
    {
        cout << "Enter basic salary: ";
        cin >> basic_salary;

        da = basic_salary * 0.10f;
        hra = basic_salary * 0.15f;
        pf = basic_salary * 0.05f;
    }

    void display_salary_slip()
    {
        float gross_salary = basic_salary + da + hra;
        float net_salary = gross_salary - pf;

        cout << "\n--- Salary Slip ---\n";
        cout << "Name: " << employee_name << "\n";
        cout << "Employee ID: " << employee_id << "\n";
        cout << "Net Salary: " << net_salary << "\n";
    }
};

int main()
{
    Salary obj;
    obj.input_employee();
    obj.input_salary();
    obj.display_salary_slip();
    return 0;
}
