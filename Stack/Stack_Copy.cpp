#include<iostream>
#include<stack>
using namespace std;

stack<int> stackCopy(stack<int> input){
    stack<int> temp;
    while(!input.empty()){
        int curr=input.top();
        temp.push(curr);
        input.pop();
    }

    stack<int> ans;
    while(!temp.empty()){
        int curr=temp.top();
        ans.push(curr);
        temp.pop();
    }

    return ans;
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int> result=stackCopy(st);

    cout<<"Original Stack"<<endl;;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    cout<<endl;

    cout<<"Copy Stack"<<endl;
    while(!result.empty()){
        cout<<result.top()<<" ";
        result.pop();
    }

    return 0;
}
