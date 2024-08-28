#include <bits/stdc++.h>
using namespace std;

class MyException : public exception
{
public:
    const char *what()
    {
        return "The Value is Less than 0";
    }
};

void checkValue(int val)
{
    if (val < 0)
    {
        throw MyException();
    }

    cout << "Value is OK" << endl;
}

int main()
{

    try
    {
        checkValue(10);
        checkValue(-10);
    }
    catch (MyException e)
    {
        cout << e.what();
    }

    return 0;
}