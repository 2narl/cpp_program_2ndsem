#include <iostream>
#include <exception>
using namespace std;

class InsufficientFunds : public exception
{
    double shortFall;

public:
    InsufficientFunds(double amt) : shortFall(amt) {}

    const char *what() const noexcept override
    {
        return "Insufficient funds for withdrawal.";
    }
    double getShortfall() const { return shortFall; }
};

class Account
{
    double balance;

public:
    Account(double b) : balance(b) {}

    void withdraw(double amt)
    {
        if (amt > balance)
        {
            throw InsufficientFunds(amt - balance);
        }
        balance -= amt;
        cout << "Withdraw " << amt << ". Balance: " << balance << endl;
    }
};

int main()
{
    Account acc(1000);

    try
    {
        acc.withdraw(400);
        acc.withdraw(800);
    }
    catch (const InsufficientFunds &e)
    {
        cout << e.what() << ". Short by " << e.getShortfall() << endl;
    }
}