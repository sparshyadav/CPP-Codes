#include <bits/stdc++.h>
using namespace std;

class Customer
{
    string name;
    int accountNumber;
    int balance;

public:
    Customer(string name, int accountNumber, int balance)
    {
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else{
            cout<<"Invalid Amount"<<endl;
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0)
        {
            balance -= amount;
        }
        else{
            cout<<"Invalid Amount"<<endl;
        }
    }

    void display()
    {
        cout << "Name - " << name << endl;
        cout << "Account Number - " << accountNumber << endl;
        cout << "Balance - " << balance << endl;
        cout << endl;
    }
};

int main()
{

    return 0;
}