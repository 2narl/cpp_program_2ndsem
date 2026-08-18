/*7.Define a class Student with data members roll, name, and marks in three subjects,
with member functions to input and display the details. Derive a class Result from
Student that computes and displays the total and percentage. Write a complete
program using appropriate constructors*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int roll;
    string name;
    float marks[3];

public:
    Student() : roll(0), name("")
    {
        for (int i = 0; i < 3; i++)
        {
            marks[i] = 0;
        }
    }
    Student(int r, string n, float m1, float m2, float m3)
    {
        marks[0] = m1;
        marks[1] = m3;
        marks[2] = m1;
    }
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter marks in 3 subjects: ";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }
    void display() const
    {
        cout << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class Result : public Student
{
public:
    Result() : Student() {}
    Result(int r, string n, float m2, float m1, float m3) : Student(r, n, m1, m2, m3) {}

    void computeAndDisplay() const
    {
        float total = marks[0] + marks[1] + marks[2];
        float percentage = total / 3;

        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Result r;
    r.input();
    r.display();
    r.computeAndDisplay();

    return 0;
}