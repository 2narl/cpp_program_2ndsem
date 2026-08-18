/*Qn.14 Create two classes Publication (title, price) and Sales (monthly sales total).
Derive a class Book from both, adding author name and page count. Each class should
have a display() function, and Book should properly initialize all inherited data
through constructors. Write the complete program.*/

#include <iostream>
#include <string>
using namespace std;

class Publication
{
protected:
    string title;
    float price;

public:
    Publication(string s, float p) : title(s), price(p) {}

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Sales
{
protected:
    float monthly_sales_total;

public:
    Sales(float m) : monthly_sales_total(m) {}

    void display()
    {
        cout << "Month Salse Total:Rs. " << monthly_sales_total << endl;
    }
};

class Book : public Publication, public Sales
{
protected:
    string author_name;
    int page_count;

public: // constructor 2 ota nai base class lai
    Book(string t, float p, float m, string au, int pc) : Publication(t, p), Sales(m), author_name(au), page_count(pc) {}

    void display()
    {
        cout << "----- Book Details -----" << endl;
        Publication::display(); // Call Publication's display
        cout << "Author: " << author_name << endl;
        cout << "Pages: " << page_count << endl;
        Sales::display(); // Call Sales's display
        cout << "------------------------" << endl;
    }
};

int main()
{
    Book myBook("OOP with C++", 590.36, 15402.59, "E Balagurusamy", 680);
    myBook.display();
    return 0;
}