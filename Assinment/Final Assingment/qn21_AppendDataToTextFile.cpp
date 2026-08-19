/*Qn.21 Write a C++ program to append new data to an existing text file.*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string data;

    // Open file in append mode
    ofstream file("data.txt", ios::app);

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter data to append: ";
    getline(cin, data);

    // Append data to the file
    file << data << endl;

    file.close();

    cout << "Data appended successfully." << endl;

    return 0;
}
