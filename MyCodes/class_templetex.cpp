#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Box
{
    T item;

public:
    Box(T i) : item(i) {}
    T get()
    {
        return item;
    }
};

int main()
{
    Box<int> b1(18);
    cout << b1.get() << endl;

    Box<double> b2(20.36);
    cout << b2.get() << endl;

    Box<string> b3("A");
    cout << b3.get() << endl;

    Box<string> b4("Narayan");
    cout << b4.get() << endl;

    return 0;
}