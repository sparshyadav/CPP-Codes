#include<iostream>
using namespace std;

void print(int*p){
    cout<<*p<<endl;
}

void update(int*ptr){
    *ptr=*ptr+1;
}

int main(){

    int val=5;
    int*ptr=&val;
    
    update(ptr);
    print(ptr);

    return 0;
}