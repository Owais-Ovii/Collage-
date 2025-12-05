#include <iostream>
using namespace std;

class Student
{
protected:
    string student_name;

public:
    void input_student()
    {
        cout << "Enter student name: ";
        cin >> student_name;
    }
};

class Sports
{
protected:
    int sports_score;

public:
    void input_sports()
    {
        cout << "Enter sports score: ";
        cin >> sports_score;
    }
};

class Academics
{
protected:
    int academic_score;

public:
    void input_academics()
    {
        cout << "Enter academic score: ";
        cin >> academic_score;
    }
};

class Result : public Student, public Sports, public Academics
{
public:
    void display_result()
    {
        int final_score = sports_score + academic_score;
        cout << "\nFinal Combined Score: " << final_score << "\n";
    }
};

int main()
{
    Result obj;
    obj.input_student();
    obj.input_sports();
    obj.input_academics();
    obj.display_result();
    return 0;
}
