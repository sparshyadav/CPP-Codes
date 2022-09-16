// Write a program that tells the number of currency notes required to get that amount in total using switch case.
#include <iostream>
using namespace std;

int main()
{

    int amount;
    cout << "Enter the Amount you want to Withdraw: " << endl;
    cin >> amount;
    int rs2000, rs500, rs200, rs100, rs50, rs20, rs10, rs5, rs2, rs1;
    switch (1)
    {
    case 1:
        rs2000 = amount / 2000;
        amount = amount % 2000;
        cout << "The number of Rs 2000 required are: " << rs2000 << endl;
    case 2:
        rs500 = amount / 500;
        amount = amount % 500;
        cout << "The number of Rs 500 required are: " << rs500 << endl;
    case 3:
        rs200 = amount / 200;
        amount = amount % 200;
        cout << "The number of Rs 200 required are: " << rs200 << endl;
    case 4:
        rs100 = amount / 100;
        amount = amount % 100;
        cout << "The number of Rs 100 required are: " << rs100 << endl;
    case 5:
        rs50 = amount / 50;
        amount = amount % 50;
        cout << "The number of Rs 50 required are: " << rs50 << endl;
    case 6:
        rs20 = amount / 20;
        amount = amount % 20;
        cout << "The number of Rs 20 required are: " << rs20 << endl;
    case 7:
        rs10 = amount / 10;
        amount = amount % 10;
        cout << "The number of Rs 50 required are: " << rs10 << endl;
    case 8:
        rs5 = amount / 5;
        amount = amount % 5;
        cout << "The number of Rs 5 required are: " << rs5 << endl;
    case 9:
        rs2 = amount / 2;
        amount = amount % 2;
        cout << "The number of Rs 2 required are: " << rs2 << endl;
    case 10:
        rs1 = amount / 1;
        amount = amount % 1;
        cout << "The number of Rs 1 required are: " << rs1 << endl;
    default:
        break;
    }

    return 0;
}