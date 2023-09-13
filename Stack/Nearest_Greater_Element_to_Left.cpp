#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> NGL(vector<int> &arr)
{
    vector<int> ans(arr.size(), -1);
    stack<int> st;

    for (int i = 0; i < arr.size(); i++)
    {
        while (!st.empty() && st.top() < arr[i])
        {
            st.pop();
        }
        if (!st.empty() && st.top() > arr[i])
        {
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}

int main()
{

    vector<int> arr = {4, 2, 1, 0, 3, 1};
    vector<int> result = NGL(arr);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}