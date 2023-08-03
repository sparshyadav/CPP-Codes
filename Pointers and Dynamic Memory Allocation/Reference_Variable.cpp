#include<iostream>
using namespace std;

void update(int &n){ //this is known as pass by reference, when reference variable is passed in a function
    n++;
}

int main(){

    int i=5;
    int &j=i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;

    cout<<"Before Value: "<<i<<endl;
    update(i);
    cout<<"After Value: "<<i<<endl;

    return 0;
}