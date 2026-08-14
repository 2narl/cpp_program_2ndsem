/*Explain the use of operator overloading with the help
of a program to add two real numbers using the + operator.*/

#include <iostream>
using namespace std;

class Real
{
private:
    float value;

public:
    Real(float v = 0)
    {
        value = v;
    }

    Real operator+(Real r)
    {
        Real temp;
        temp.value = value + r.value;
        return temp;
    }

    void display()
    {
        cout << "Sum of Real Numbers: " << value << endl;
    }
};

int main()
{
    Real r1(10.5);
    Real r2(20.6);

    Real r3 = r1 + r2;

    r3.display();

    return 0;
}