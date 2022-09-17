#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int basic;
    cin >> basic;
    int grade;
    cin >> grade;
    int hra, da, allow, pf;
    hra = (20 / 100) * basic;
    da = (50 / 100) * basic;
    pf = (11 / 100) * basic;
    // if (grade = 'A')
    // {
    //     allow = 1700;
    // }
    // if (grade = 'B')
    // {
    //     allow = 1500;
    // }
    // if (grade = 'C')
    // {
    //     allow = 1300;
    // }
    switch (grade)
    {
    case 'A':
        allow=1700;
        break;
    case 'B':
        allow=1500;
        break;
    case 'C':
        allow=1300;
        break;
    
    default:
        break;
    }
    int totalSalary;
    totalSalary = (basic + hra + da + allow) - pf;
    cout << totalSalary;

    return 0;
}