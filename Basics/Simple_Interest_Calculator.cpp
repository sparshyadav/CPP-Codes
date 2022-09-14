// Write a program to take principle amount, rate of interest, and time from the user and then calculate simple interest.
#include <iostream>
using namespace std;

int main()
{

    int principleAmount;
    cout << "Enter the Principle Amount: " << endl;
    cin >> principleAmount;
    int rateofInterest;
    cout << "Enter the Rate of interest: " << endl;
    cin >> rateofInterest;
    int time;
    cout << "Enter the time: " << endl;
    cin >> time;
    int simpleInterest;
    simpleInterest = (principleAmount * rateofInterest * time) / 100;
    cout << "The Simple Interest is: " << simpleInterest << endl;

    return 0;
}