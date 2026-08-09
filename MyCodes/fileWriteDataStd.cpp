#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outFile;
    outFile.open("student.txt", ios::out); //C:\\Program Only\\Program For Github\\cpp_program_2ndsem\\MyCodes\\

    // ofstream outFile("student.txt", ios::out);
    if (!outFile)
    {
        cout << "Error opening file:" << endl;
        return 1;
    }

    outFile << "Roll No: 101" << endl;
    outFile << "Name: Aarav Sharma" << endl;
    outFile << "Marks: 87.5" << endl;

    outFile.close();

    outFile.open("student.txt", ios::app);
    if (!outFile)
    {
        cout << "Error opening file:" << endl;
        return 1;
    }
    outFile << "Roll No: 102" << endl;
    outFile << "Name: Narayan Aryal" << endl;
    outFile << "Marks: 90.25" << endl;

    outFile.close();
    ifstream inFile("student.txt");
    if (!inFile)
    {
        cout << "Error opening file:" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}