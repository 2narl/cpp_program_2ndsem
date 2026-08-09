#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;

    file.open("report.txt", ios::in | ios::out | ios::app);

    if (!file)
    {
        return 1;
    }

    file << "Hello World." << endl;
    file.close();

    file.open("report.txt", ios::out | ios::app);

    if (!file)
    {
        return 1;
    }

    file << "It's me 2NArl." << endl;
    file.close();

    file.open("report.txt", ios::app | ios::trunc);
    file << "Fress log Start." << endl;
    file.close();
    return 0;
}