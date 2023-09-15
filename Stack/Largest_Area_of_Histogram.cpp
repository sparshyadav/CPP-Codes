#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> NSR(vector<int> arr)
{
    vector<int> ans(arr.size(), arr.size());
    stack<int> st;

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            st.pop();
        }
        if (!st.empty() && arr[st.top()] < arr[i])
        {
            ans[i] = st.top();
        }
        st.push(i);
    }
    return ans;
}

vector<int> NSL(vector<int> &arr)
{
    
    vector<int> ans(arr.size(), arr.size());
    stack<int> st;

    for (int i = 0; i < arr.size(); i++)
    {
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            st.pop();
        }
        if (!st.empty() && arr[st.top()] < arr[i])
        {
            ans[i] = st.top();
        }
        st.push(i);
    }
    return ans;
}


vector<int> largestArea(vector<int> arr)
{
    vector<int> right = NSR(arr);
    vector<int> left =NSL(arr);
    vector<int> ans(arr.size(), 0);

    for(int i=0; i<arr.size(); i++){
        int area=(right[i]-left[i])*arr[i];
        ans[i]=area;
    }
    return ans;
}

int main()
{

    vector<int> arr = {5, 2, 4, 6, 3, 5};
    vector<int> result=largestArea(arr);

    for(int i=0; i<arr.size(); i++){
        cout<<result[i]<<" ";
    }

    return 0;
}