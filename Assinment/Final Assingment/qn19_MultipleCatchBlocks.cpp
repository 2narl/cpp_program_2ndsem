/*Qn.19 Write a program with multiple catch blocks that handles
a division-by-zero error and an out-of-range array access separately.*/

#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter 1 for Division by Zero: " << endl;
    cout << "Enter 2 for Array Out of Range: " << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    try
    {
        if (choice == 1)
        {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;

            if (b == 0)
                throw "Division by zero error!";

            cout << "Result = " << a / b << endl;
        }
        else if (choice == 2)
        {
            int arr[5] = {10, 20, 30, 40, 50};
            int index;

            cout << "Enter array index (0-4): ";
            cin >> index;

            if (index < 0 || index >= 5)
                throw index;

            cout << "Array element = " << arr[index] << endl;
        }
    }

    // Catch block for division by zero
    catch (const char *message)
    {
        cout << "Exception: " << message << endl;
    }

    // Catch block for array out of range
    catch (int index)
    {
        cout << "Exception: Array index " << index
             << " is out of range!" << endl;
    }

    return 0;
}
