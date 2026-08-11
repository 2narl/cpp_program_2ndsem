#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    float marks;

public:
    void setdata(string n, int a, float m)
    {
        name = n;
        age = a;
        marks = m;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }

    void writeFormatted()
    {
        ofstream file("student.txt");
        file << name << " " << age << " " << marks << endl;
        file.close();
    }

    void readFormatted()
    {
        ifstream file("student.txt");
        file >> name >> age >> marks;
        file.close();
    }
};

int main()
{
    Student s;

    s.setdata("Ram", 20, 85.5);

    s.writeFormatted();
    s.display();

    s.setdata(" ", 0, 0);

    s.writeFormatted();
    s.readFormatted();

    cout << "Formated Input: " << endl;
    s.display();
}
