#include <iostream>
#include <stack>
using namespace std;

void stackCopy(stack<int> &input, stack<int> &result)
{
    if (input.empty())
    {
        return;
    }
    int curr = input.top();
    input.pop();
    stackCopy(input, result);
    result.push(curr);
}

int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    stack<int> st_copy = st;
    stack<int> result;
    stackCopy(st, result);

    cout << "Original Stack" << endl;
    while (!st_copy.empty())
    {
        cout << st_copy.top() << " ";
        st_copy.pop();
    }

    cout << endl;

    cout << "Copy Stack" << endl;
    while (!result.empty())
    {
        cout << result.top() << " ";
        result.pop();
    }

    return 0;
}
