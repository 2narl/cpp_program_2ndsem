#include <iostream>
using namespace std;

namespace Physics
{
    double calculateArea(double side)
    {
        return side * side;
    }
}

namespace Geometry
{
    double calculateArea(double radius)
    {
        return 3.14159 * radius * radius;
    }
}

int main()
{
    cout << Physics::calculateArea(5) << endl;  // Calls Physics namespace function
    cout << Geometry::calculateArea(5) << endl; // Calls Geometry namespace function
}