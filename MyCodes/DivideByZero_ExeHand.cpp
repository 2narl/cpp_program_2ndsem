#include <iostream>
using namespace std;

double divide(double a, double b)
{
    if (b == 0)
    {
        throw runtime_error("Division by zero condition!");
    }
    return a / b;
}

int main()
{
    try
    {
        cout << divide(10, 2) << endl;
        cout << divide(5, 0) << endl; // This will throw an exception
    }
    catch (const runtime_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }
    cout << "Program continues....." << endl;
    return 0;
}
