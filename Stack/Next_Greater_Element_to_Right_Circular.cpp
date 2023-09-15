#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> NGR(vector<int> &arr)
{
    vector<int> ans(arr.size(), -1);
    stack<int> st;

    int n = arr.size();

    for (int i = 0; i < 2*n; i++)
    {
        int index = i % n;
        while (!st.empty() && arr[st.top()] < arr[index])
        {
            ans[st.top()] = arr[index];
            st.pop();
        }
        if (i < n)
        {
            st.push(i);
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {1, 5, 3, 4, 2};
    vector<int> result = NGR(arr);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}