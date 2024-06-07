#include <bits/stdc++.h>
using namespace std;

class Customer
{
    string name;
    int accountNumber;
    int balance;
    static int totalBalance;
    static int totalCustomer;

public:
    Customer(string name, int accountNumber, int balance)
    {
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;
        totalCustomer++;
        totalBalance += balance;
    }

    static void accessStatic()
    {
        cout << "Total Customers - " << totalCustomer << endl;
        cout << "Total Balance - " << totalBalance << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            totalBalance += amount;
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0)
        {
            balance -= amount;
            totalBalance -= amount;
        }
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
int Customer ::totalBalance = 0;

int main()
{
    // Customer ::accessStatic();

    Customer c1("Sparsh", 1383, 5000);
    // c1.display();

    Customer c2("Shreya", 1421, 10000);
    // c2.display();

    c1.withdraw(2000);

    Customer ::accessStatic();

    c2.deposit(3000);

    Customer::accessStatic();

    c1.displayTotalCustomers();

    return 0;
}