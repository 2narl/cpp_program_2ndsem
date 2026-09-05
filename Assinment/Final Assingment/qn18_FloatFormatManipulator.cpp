/*Design a single manipulator format to provide the following output specifications for printing float values:
    (i) 10 column width
    (ii) Right Justified
    (iii) Two-digit precision
    (iv) Filling of unused places with *
    (v) Trailing zeroes shown
*/

#include <iostream>
#include <iomanip>
using namespace std;

// User-defined manipulator
ostream &floatFormat(ostream &out)
{
    out << right
        << setfill('*')
        << setw(10)
        << fixed
        << setprecision(2);

    return out;
}

int main()
{
    float num;

    cout << "Enter a floating-point number: ";
    cin >> num;

    cout << "Formatted value: " << floatFormat << num << endl;

    return 0;
}