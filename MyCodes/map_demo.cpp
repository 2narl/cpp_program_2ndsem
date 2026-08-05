#include <iostream>
#include <map>
#include <numeric> //accumulate()
using namespace std;

int main()
{
    map<string, int> marks; // class template for key-value pair

    marks["Rita"] = 15;
    marks["Sita"] = 20;
    marks["Gita"] = 25;

    for (auto &p : marks)
    {
        cout << p.first << " : " << p.second << endl;
    }

    // key-value pair insertion
    auto it = marks.find("Sita");
    if (it != marks.end())
    {
        cout << "Found: " << it->first << " : " << it->second << endl;
    }
}