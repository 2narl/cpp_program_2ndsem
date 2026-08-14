/*Write a program to calculate the area of a circle,
a rectangle, and a triangle using overloaded functions named area().*/

#include <iostream>
using namespace std;

double area(double r)
{
    return r * 22 / 7;
}

double area(double l, double b)
{
    return l * b;
}

double area(double b, double h)
{
    return b * h * 1 / 2;
}
