#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Box
{
private:
    T item;

public:
    Box(T val) : item(val) {} // constructor

    T get() const { return item; } // getter function

    void set(T val) { item = val; } // setter function
};

int main()
{
    Box<int> intBox(123);
    Box<string> strBox("Hello");

    cout << intBox.get() << endl; // Output: 123
    intBox.set(intBox.get() + 5);
    cout << intBox.get() << endl; // Output: 128

    cout << strBox.get() << endl; // Output: Hello
    strBox.set("World");
    cout << strBox.get() << endl; // Output: World
}