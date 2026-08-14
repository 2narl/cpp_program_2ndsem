/*Qn.4 Write a program to calculate the area of a circle,
a rectangle, and a triangle using overloaded functions named area().*/

#include <iostream>
using namespace std;

// Area of Circle
double area(double r)
{
    return 3.14159 * r * r;
}
// Area of Rectungle
double area(double l, double b)
{
    return l * b;
}
// Area of Triangle
double area(double b, double h)
{
    return 0.5 * b * h;
}

int main()
{
    double radius, length, width, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Area of circle = " << area(radius) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;

    cout << "Area of rectangle = " << area(length, width) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;

    cout << "Area of triangle = " << area(base, height) << endl;

    return 0;
}