#include <iostream>
#include <stack>
using namespace std;

stack<int> insertAtBottom(stack<int> input, int insert)
{

    stack<int> result;
    while (!input.empty())
    {
        int curr = input.top();
        result.push(curr);
        input.pop();
    }

    input.push(insert);

    while (!result.empty())
    {
        int curr = result.top();
        input.push(curr);
        result.pop();
    }
    return input;
}

stack<int> insertAtIndex(stack<int> input, int insert, int idx)
{

    stack<int> result;
    int count = idx - 1;
    while (count != 0)
    {
        int curr = input.top();
        result.push(curr);
        input.pop();
        count--;
    }

    input.push(insert);

    while (!result.empty())
    {
        int curr = result.top();
        input.push(curr);
        result.pop();
    }
    return input;
}

int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    stack<int> result = insertAtBottom(st, 10);
    stack<int> ans = insertAtIndex(st, 50, 4);

    cout << "Original Stack" << endl;
    ;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;

    cout << "Inserted Stack - Bottom" << endl;
    while (!result.empty())
    {
        cout << result.top() << " ";
        result.pop();
    }

    cout<<endl;

    cout << "Inserted Stack" << endl;
    while (!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }

    return 0;
}