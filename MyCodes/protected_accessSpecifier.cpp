#include <iostream>
using namespace std;

class Animal
{
protected:
    string species; // protected member variable
public:
    void setSpecies(string s)
    {
        species = s;
    }
};
class Dog : public Animal
{
public:
    void showSpecies()
    {
        cout << "Species: " << species << endl; // accessing protected member variable
    }
};
int main()
{
    Dog myDog;
    myDog.setSpecies("ABC");
    myDog.showSpecies(); // Output: Species: ABC
    return 0;
}