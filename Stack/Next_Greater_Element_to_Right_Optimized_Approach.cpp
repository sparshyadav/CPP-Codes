#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> NGR(vector<int> &arr){
    vector<int> ans(arr.size(), -1);
    stack<int> st;
    
    for(int i=0; i<arr.size(); i++){
        while(!st.empty() && arr[st.top()]<arr[i]){
            ans[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main(){

    vector<int> arr={1, 3, 0, 1, 2, 4};
    vector<int> result=NGR(arr);

    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }

    return 0;
}