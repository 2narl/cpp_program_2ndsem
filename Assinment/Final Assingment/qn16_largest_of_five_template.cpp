/*Qn.16 Write a function template that finds the largest of
five numbers, supplied by the user.*/

#include <iostream>
using namespace std;

template <typename T>
T largeNum(T a, T b, T c, T d, T e)
{
    T maxVal = a;
    if (b > maxVal)
        maxVal = b;
    if (c > maxVal)
        maxVal = c;
    if (d > maxVal)
        maxVal = d;
    if (e > maxVal)
        maxVal = e;
    return maxVal;
}

int main()
{
    double n1, n2, n3, n4, n5;

    cout << "Enter Five Number: ";
    if (!(cin >> n1 >> n2 >> n3 >> n4 >> n5))
    {
        cout << "Invalid Input." << endl;
        return 0;
    }

    cout << "The largest number is : " << largeNum(n1, n2, n3, n4, n5) << endl;
    return 0;
}