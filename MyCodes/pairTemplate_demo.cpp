#include <iostream>
using namespace std;

template <typename T1, typename T2>
class KeyValue
{
private:
    T1 key;
    T2 value;

public:
    KeyValue(T1 k, T2 v) : key(k), value(v) {} // constructor

    void show()
    {
        cout << key << " -> " << value << endl;
    }
};

int main()
{
    KeyValue<string, int> age("Rita", 15);
    KeyValue<int, double> price(101, 49.7);

    age.show();   // Output: Rita -> 15
    price.show(); // Output: 101 -> 49.7

    return 0;
}