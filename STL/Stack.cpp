// Stacks in STL.
#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;
    s.push("Sparsh");
    s.push("Yadav");

    cout<<"Top Elements -> "<<s.top()<<endl;

    s.pop();
    cout<<"Top Elements -> "<<s.top()<<endl;


    return 0;
}