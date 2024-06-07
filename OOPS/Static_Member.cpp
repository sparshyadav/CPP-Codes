#include <bits/stdc++.h>
using namespace std;

class Customer
{
    string name;
    int accountNumber;
    int balance;

public:
    static int totalCustomer;
    Customer(string name, int accountNumber, int balance)
    {
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;
        totalCustomer++;
    }

    void display()
    {
        cout << "Name - " << name << endl;
        cout << "Account Number - " << accountNumber << endl;
        cout << "Balance - " << balance << endl;
        cout << "Total Customers - " << totalCustomer << endl;
        cout << endl;
    }

    void displayTotalCustomers()
    {
        cout << "Total Customers - " << totalCustomer << endl;
    }
};

int Customer ::totalCustomer = 0;

int main()
{
    Customer ::totalCustomer = 5;

    Customer c1("Sparsh", 1383, 5000);
    c1.display();

    Customer c2("Shreya", 1421, 10000);
    c2.display();

    c1.displayTotalCustomers();

    return 0;
}