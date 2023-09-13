#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> stockSpan(vector<int> arr){
    vector<int> ans(arr.size(), 1);
    stack<int> st;

    for(int i=0; i<arr.size(); i++){
        while(!st.empty() && arr[st.top()]<arr[i]){
            st.pop();
        }
        if(!st.empty() && arr[st.top()]>arr[i]){
            ans[i]=i- st.top();
        }
        st.push(i);
    }
    return ans;
}

int main(){

    vector<int> arr={100, 80, 60, 70, 60, 75, 85};
    vector<int> result=stockSpan(arr);

    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }

    return 0;
}