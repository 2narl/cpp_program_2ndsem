/* Lab 6 (Class & Access Specifiers): Design a class BankAccount with private data
members: accountNumber, holderName, balance. Provide public member  functions:
a. deposit(double amount).
b. withdraw(double amount) (should not allow withdrawal if balance is
insufficient).
c. display() to print account details. Write a program to create a
BankAccount object, perform a few transactions, and display the final
balance.*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string holderName;
    double balance;

public:
    BankAccount(string accNum, string name, double initialBalance)
    {
        accountNumber = accNum;
        holderName = name;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: Rs." << amount << endl;
        }
        else
        {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0)
        {
            if (balance >= amount)
            {
                balance -= amount;
                cout << "Withdrew: Rs." << amount << endl;
            }
            else
            {
                cout << "Insufficient balance for withdrawal." << endl;
            }
        }
        else
        {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }
};

int main()
{
    // Create a BankAccount object
    BankAccount account("123456789", "Narayan", 1000.0);

    // Perform transactions
    account.deposit(500.0);  // Deposit 500
    account.deposit(-100.0); // Attempt to deposit a negative amount

    account.deposit(200.0);  // Deposit 200
    account.withdraw(300.0); // Withdraw 300

    account.withdraw(1500.0); // Attempt to withdraw more than balance
    account.withdraw(-50.0);  // Attempt to withdraw a negative amount

    return 0;
}
