#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int ans(string str)
{
    stack<string> num;
    stack<char> op;

    for (int i = 0; i < str.length(); i++)
    {
        string ascii = str[i];
        if (ascii >= 48 && ascii <= 57)
        {
            string s=""+ch;
            num.push(s);
        }
        else if (op.size() == 0 || str[i] == '(' || op.top() == '(')
        {
            op.push(str[i]);
        }
        else if (str[i] == ')')
        {
            while (op.top() != '(')
            {
                string v2 = num.top();
                num.pop();
                string v1 = num.top();
                num.pop();
                string s=""+op.top() + v1 + v2
                num.push(s);
                op.pop();
            }
            op.pop();
        }
        else
        {
            if (str[i] == '+' || str[i] == '-')
            {
                string v2 = num.top();
                num.pop();
                string v1 = num.top();
                num.pop();
                string s=""+op.top() + v1 + v2
                num.push(s);
                op.push(str[i]);
            }
            else if (str[i] == '*' || str[i] == '/')
            {
                if (op.top() == '*' || op.top() == '/')
                {
                    string v2 = num.top();
                    num.pop();
                    string v1 = num.top();
                    num.pop();
                    string s=""+op.top() + v1 + v2
                    num.push(s);
                    op.push(str[i]);
                }
                else
                {
                    op.push(str[i]);
                }
            }
        }
    }

    while (num.size() > 1)
    {
        string v2 = num.top();
        num.pop();
        string v1 = num.top();
        num.pop();
        string s=""+op.top() + v1 + v2
        num.push(s);
    }
    return num.top();
}

int main()
{

    string str = "9-(5+3)*4/6";
    string result = ans(str);
    cout << result;

    return 0;
}