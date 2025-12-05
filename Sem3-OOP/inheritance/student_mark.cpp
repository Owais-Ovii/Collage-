#include <iostream>
using namespace std;

class Student
{
protected:
    string student_name;
    int roll_number;

public:
    void input_student()
    {
        cout << "Enter student name: ";
        cin >> student_name;

        cout << "Enter roll number: ";
        cin >> roll_number;
    }

    void display_student()
    {
        cout << "Name: " << student_name << "\n";
        cout << "Roll Number: " << roll_number << "\n";
    }
};

class Marks : public Student
{
    int subject_one;
    int subject_two;
    int subject_three;

public:
    void input_marks()
    {
        cout << "Enter three subject marks: ";
        cin >> subject_one >> subject_two >> subject_three;
    }

    void display_report()
    {
        int total_marks = subject_one + subject_two + subject_three;
        float percentage = total_marks / 3.0f;

        display_student();
        cout << "Total Marks: " << total_marks << "\n";
        cout << "Percentage: " << percentage << "\n";
    }
};

int main()
{
    Marks obj;
    obj.input_student();
    obj.input_marks();
    obj.display_report();
    return 0;
}
