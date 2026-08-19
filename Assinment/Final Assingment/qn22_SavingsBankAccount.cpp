/*Qn.22	Write a C++ program to create an Account class
to manage Savings Bank Account. Define constructor for this
class. Define a method to display the account details including
current balance in the account. Also define and implement a
friend function to calculate simple interest. Make necessary assumptions required.*/

#include <iostream>
#include <iomanip>
using namespace std;

class Account
{
private:
    int accountNo;
    string name;
    double balance;
    double rate;

public:
    // Constructor
    Account(int accNo, string n, double bal, double r)
    {
        accountNo = accNo;
        name = n;
        balance = bal;
        rate = r;
    }

    // Member function to display account details
    void display()
    {
        cout << "\n--- Savings Bank Account Details ---" << endl;
        cout << "Account Number : " << accountNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << fixed << setprecision(2);
        cout << "Current Balance: Rs. " << balance << endl;
        cout << "Interest Rate  : " << rate << "%" << endl;
    }

    // Friend function declaration
    friend double simpleInterest(Account, double);
};

// Friend function to calculate Simple Interest
double simpleInterest(Account acc, double time)
{
    // SI = (P * R * T) / 100
    return (acc.balance * acc.rate * time) / 100;
}

int main()
{
    int accNo;
    string name;
    double balance, rate, time;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Initial Balance: Rs. ";
    cin >> balance;

    cout << "Enter Interest Rate (%): ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    // Create Account object using constructor
    Account acc(accNo, name, balance, rate);

    // Display account details
    acc.display();

    // Calculate simple interest using friend function
    double interest = simpleInterest(acc, time);

    cout << "Simple Interest: Rs. " << interest << endl;
    cout << "Balance after Interest: Rs. " << balance + interest << endl;

    return 0;
}
