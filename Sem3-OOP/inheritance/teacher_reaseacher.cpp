#include <iostream>
using namespace std;

class Teacher
{
protected:
    string teacher_name;

public:
    void input_teacher()
    {
        cout << "Enter teacher name: ";
        cin >> teacher_name;
    }
};

class Researcher
{
protected:
    string research_field;

public:
    void input_researcher()
    {
        cout << "Enter research field: ";
        cin >> research_field;
    }
};

class Faculty : public Teacher, public Researcher
{
public:
    void display_profile()
    {
        cout << "\n--- Faculty Profile ---\n";
        cout << "Name: " << teacher_name << "\n";
        cout << "Research Field: " << research_field << "\n";
    }
};

int main()
{
    Faculty obj;
    obj.input_teacher();
    obj.input_researcher();
    obj.display_profile();
    return 0;
}
