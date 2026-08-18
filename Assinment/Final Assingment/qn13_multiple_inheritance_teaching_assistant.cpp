/*Qn.13. write a complete program that demonstrates multiple inheritance: a class
TeachingAssistant derived from both Student and Employee.*/

#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Student
{
protected:
    int roll;
    string name;

public:
    Student(int r, string n)
    {
        roll = r;
        name = n;
    }

    void displayStudent()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

// Base class 2
class Employee
{
protected:
    int empId;
    float salary;

public:
    Employee(int id, float s)
    {
        empId = id;
        salary = s;
    }

    void displayEmployee()
    {
        cout << "Employee ID: " << empId << endl;
        cout << "Salary: Rs. " << salary << endl;
    }
};

// Derived class using multiple inheritance
class TeachingAssistant : public Student, public Employee
{
private:
    string subject;

public:
    TeachingAssistant(int r, string n, int id, float s, string sub)
        : Student(r, n), Employee(id, s)
    {
        subject = sub;
    }

    void display()
    {
        cout << "Teaching Assistant Details" << endl;

        displayStudent();
        displayEmployee();

        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    TeachingAssistant ta(101, "Narayan Aryal", 5001, 25000, "C++");

    ta.display();

    return 0;
}