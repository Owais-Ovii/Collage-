/* Design a class Marks with data members for marks in 5 subjects. Implement functions to
calculate and display the total marks, percentage, and grade.
*/

#include <iostream>
using namespace std;
class Marks
{
private:
    float subject1;
    float subject2;
    float subject3;
    float subject4;
    float subject5;
    float total;
    float percentage;
    char grade;

public:
    void inputMarks(float s1, float s2, float s3, float s4, float s5)
    {
        subject1 = s1;
        subject2 = s2;
        subject3 = s3;
        subject4 = s4;
        subject5 = s5;
    }
    void calculateTotal()
    {
        total = subject1 + subject2 + subject3 + subject4 + subject5;
    }
    void calculatePercentage()
    {
        percentage = (total / 500) * 100;
    }
    void determineGrade()
    {
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else
            grade = 'F';
    }
    void displayResults()
    {
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main()
{
    Marks studentMarks;
    float s1, s2, s3, s4, s5;

    cout << "Enter marks for 5 subjects: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    studentMarks.inputMarks(s1, s2, s3, s4, s5);
    studentMarks.calculateTotal();
    studentMarks.calculatePercentage();
    studentMarks.determineGrade();
    studentMarks.displayResults();

    return 0;
}
