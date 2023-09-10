#include <iostream>
#include <stack>
using namespace std;

void reverse(stack<int> &input){
    stack<int> temp1;
    while(!input.empty()){
        int curr=input.top();
        temp1.push(curr);
        input.pop();
    }

    stack<int>temp2;
    while(!temp1.empty()){
        int curr=temp1.top();
        temp2.push(curr);
        temp1.pop();
    }

    while(!temp2.empty()){
        int curr=temp2.top();
        input.push(curr);
        temp2.pop();
    }
}

int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "Original Stack" << endl;
    stack<int> st_copy=st;
    while (!st_copy.empty())
    {
        cout << st_copy.top() << " ";
        st_copy.pop();
    }

    cout << endl;

    reverse(st);

    cout << "Reversed Stack" << endl;

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }


    return 0;
}