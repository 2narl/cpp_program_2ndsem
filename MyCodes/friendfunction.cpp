#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {} // constructor to initialize length and width
    // Declare the friend function
    friend void calculateArea(Rectangle r);
};

void calculateArea(Rectangle r)
{
    int area = r.length * r.width;
    cout << "Area of Rectangle: " << area << endl;
}

int main()
{
    Rectangle rect(5, 10);
    calculateArea(rect);

    return 0;
}