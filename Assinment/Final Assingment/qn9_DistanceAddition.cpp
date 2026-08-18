/*9 Write a program that overloads the '+' operator (using a friend function)
to add two objects of a Distance class (feet and inches), and also write a
conversion routine that converts the result into metres and centimetres
(1 foot = 0.3048 m, 1 inch = 2.54 cm).*/

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance(int f = 0, float i = 0.0) : feet(f), inches(i)
    {
        if (inches >= 12.0)
        {
            feet += (int)(inches / 12);
            inches = (int)inches % 12 + (inches - (int)inches);
        }
    }
    void display() const
    {
        cout << feet << "Feet, " << inches << " inches" << endl;
    }

    friend Distance operator+(const Distance &d1, const Distance &d2);

    void tometers() const
    {
        double totalMeters = (feet * 0.3048) + (inches * 0.0254);
        int meters = (int)totalMeters;
        double centimeters = (totalMeters - meters) * 100;
    }
};
