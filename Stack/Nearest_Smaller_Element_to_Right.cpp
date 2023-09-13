#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> NSR(vector<int> arr)
{
    vector<int> ans(arr.size(), -1);
    stack<int> st;

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() > arr[i])
        {
            st.pop();
        }
        if (!st.empty() && st.top() < arr[i])
        {
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}

int main()
{

    vector<int> arr = {4, 5, 2, 1, 7, 3};
    vector<int> result = NSR(arr);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}