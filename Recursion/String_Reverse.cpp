#include<iostream>
using namespace std;

void reverse(string& st, int start, int end){
    if(start>end){
        return;
    }
    swap(st[start], st[end]);
    start++;
    end--;
    reverse(st, start, end);
}

int main(){

    string name="Sparsh";
    cout<<name<<endl;
    reverse(name, 0, name.length()-1);
    cout<<name;

    return 0;
}