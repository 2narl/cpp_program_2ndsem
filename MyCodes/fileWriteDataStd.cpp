#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream inFile;
    inFile.open("student.txt, ios::out");
    if (!inFile)
    {
        cout << "Error opening file:" << endl;
        return 1;
    }

    inFile << "Roll No: 101" << endl;
    inFile << "Name: Aarav Sharma" << endl;
    inFile << "Marks: 87.5" << endl;

    inFile.close();

    /*outFile.open("student.txt", ios::app);
    if (!outFile)
    {
        cout << "Error opening file:" << endl;
        return 1;
    }
    outFile << "Roll No: 102" << endl;
    outFile << "Name: Narayan Aryal" << endl;
    outFile << "Marks: 90.25" << endl;
*/
    return 0;
}