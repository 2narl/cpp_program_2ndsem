/*Write a program to display the number of objects
created so far, using a static data member.*/
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    static int count; // static data member

    Student(string s, int a)
    {
        name = s;
        age = a;
        count++;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Definition and initialization of static data member
int Student::count = 0;

int main()
{
    Student s1("Narayan", 18);
    s1.display();

    Student s2("Pawan", 19);
    s2.display();

    cout << "Total Object Created: " << Student::count << endl;
}