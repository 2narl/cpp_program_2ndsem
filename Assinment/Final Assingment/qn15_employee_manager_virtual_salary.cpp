/*Qn.15 Write a program in C++ to define a class ‘Employee’ with a virtual function
‘Salary’. Derive the class ‘Manager’ from the class ‘Employee’ and implement
the salary function. assumptions.*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int id;
    string name;
    float basicSalary;

public:
    Employee(int i, string n, float s) : id(i), name(n), basicSalary(s) {}

    virtual void Salary()
    {
        cout << "Employee Salary: Rs. " << basicSalary << endl;
    }
};

class Manager : public Employee
{
private:
    double bonus;

public:
    Manager(int i, string n, float s, float b)
        : Employee(i, n, s), bonus(b) {}

    // Override virtual function
    void Salary() override
    {
        double totalSalary = basicSalary + bonus;
        cout << "==Manager Detail ==" << endl;
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: Rs. " << basicSalary << endl;
        cout << "Bonus: Rs. " << bonus << endl;
        cout << "Total Salary: Rs. " << totalSalary << endl;
    }
};

int main()
{
    Employee *emp;

    Manager manager(1026, "Suman Rana", 35000, 5600);

    emp = &manager;

    // Calls Manager's Salary() due to virtual function
    emp->Salary();

    return 0;
}