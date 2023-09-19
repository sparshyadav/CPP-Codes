#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "abcdfakljsdfhsodifjgjdskfgKLFDSKJDSHJNDSKCASDHKADSAJDSKN";
    int hash[55] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            hash[(int)str[i] - 'a' + 26]++;
        }
        else
        {
            hash[(int)str[i] - 'A']++;
        }
    }

    for (int i = 0; i < 55; i++)
    {
        cout << hash[i] << " ";
    }

    return 0;
}