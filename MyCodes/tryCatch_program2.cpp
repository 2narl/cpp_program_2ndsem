#include <iostream>
#include <stdexcept>
using namespace std;

int getElement(int arr[], int size, int index)
{
    if (index < 0 || index >= size)
    {
        throw out_of_range("Index is out of range!");
    }
    if (size == 0)
    {
        throw invalid_argument("Array is empty!");
    }
    return arr[index];
}

int main()
{
    int marks[8] = {90, 80, 70, 60, 50, 6, 7, 8};
    int index = 7; // deliberately out of range.

    try
    {
        cout << getElement(marks, 8, index);
    }
    catch (const out_of_range &e)
    {
        cout << "Range Error: " << e.what();
    }
    catch (const invalid_argument &e)
    {
        cout << "Argument Error: " << e.what();
    }
    catch (const exception &e)
    {
        cout << "Unknown Error: " << e.what();
    }
    return 0;
}
