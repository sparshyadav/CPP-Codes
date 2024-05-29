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

    Customer(Customer &B)
    {
        name = B.name;
        accountNumber = B.accountNumber;
        balance = B.balance;
    }

    void Display()
    {
        cout << "Name - " << name << endl;
        cout << "Account Number - " << accountNumber << endl;
        cout << "Balance - " << balance << endl;
    }
};

int main()
{
    Customer a1("Sparsh", 43827372, 10000000);
    a1.Display();

    Customer a2(a1);
    a2.Display();
}