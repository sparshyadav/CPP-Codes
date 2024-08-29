#include <bits/stdc++.h>
using namespace std;

class Bank
{
    int accountNumber;
    int balance = 0;

public:
    void deposit(int amount)
    {
        balance += amount;
    }

    void withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Amount is Greater than Balance" << endl;
        }
        else
        {
            balance -= amount;
        }
    }

    void checkBalance()
    {
        cout << "Your Current Balance is: " << balance << endl;
    }
};

int main()
{

    Bank b;
    b.checkBalance();
    b.deposit(10000);
    b.checkBalance();

    b.withdraw(2500);
    b.checkBalance();

    b.deposit(1250);
    b.checkBalance();

    b.withdraw(5000);
    b.checkBalance();

    return 0;
}