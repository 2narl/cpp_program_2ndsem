#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // constructr opens the file directly
    // no seprate open() call is needed

    ofstream outFile("data.txt"); // mode: ios::out
    ifstream inFile("data.txt");  // mode: ios::in

    outFile << "Created using constructor";
    outFile.close();

    if (!inFile)
    {
        cout << "File could not be opened.";
    }
    inFile.close();
}