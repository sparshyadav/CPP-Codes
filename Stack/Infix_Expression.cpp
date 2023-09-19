#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int ans(string str)
{
    stack<int> num;
    stack<char> op;

    for (int i = 0; i < str.length(); i++)
    {
        int ascii = int(str[i]);
        if (ascii >= 48 && ascii <= 57)
        {
            num.push(ascii - 48);
        }
        else if (op.size() == 0 || str[i] == '(' || op.top() == '(')
        {
            op.push(str[i]);
        }
        else if (str[i] == ')')
        {
            while (op.top() != '(')
            {
                int v2 = num.top();
                num.pop();
                int v1 = num.top();
                num.pop();
                if (op.top() == '-')
                {
                    num.push(v1 - v2);
                }
                else if (op.top() == '+')
                {
                    num.push(v1 + v2);
                }
                else if (op.top() == '*')
                {
                    num.push(v1 * v2);
                }
                else if (op.top() == '/')
                {
                    num.push(v1 / v2);
                }
                op.pop();
            }
            op.pop();
        }
        else
        {
            if (str[i] == '+' || str[i] == '-')
            {
                int v2 = num.top();
                num.pop();
                int v1 = num.top();
                num.pop();
                if (op.top() == '-')
                {
                    num.push(v1 - v2);
                }
                else if (op.top() == '+')
                {
                    num.push(v1 + v2);
                }
                else if (op.top() == '*')
                {
                    num.push(v1 * v2);
                }
                else if (op.top() == '/')
                {
                    num.push(v1 / v2);
                }
                op.pop();
                op.push(str[i]);
            }
            else if (str[i] == '*' || str[i] == '/')
            {
                if (op.top() == '*' || op.top() == '/')
                {
                    int v2 = num.top();
                    num.pop();
                    int v1 = num.top();
                    num.pop();
                    if (op.top() == '*')
                    {
                        num.push(v1 * v2);
                    }
                    else if (op.top() == '/')
                    {
                        num.push(v1 / v2);
                    }
                    op.pop();
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
        int v2 = num.top();
        num.pop();
        int v1 = num.top();
        num.pop();
        if (op.top() == '-')
        {
            num.push(v1 - v2);
        }
        else if (op.top() == '+')
        {
            num.push(v1 + v2);
        }
        else if (op.top() == '*')
        {
            num.push(v1 * v2);
        }
        else if (op.top() == '/')
        {
            num.push(v1 / v2);
        }
        op.pop();
    }
    return num.top();
}

int main()
{

    string str = "9-(5+3)*4/6";
    int result = ans(str);
    cout << result;

    return 0;
}