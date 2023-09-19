#include<iostream>
using namespace std;

int main(){

    int arr[10]={1, 2, 3, 4, 1, 2, 3, 4, 1, 2};
    int hash[10]={0};
    for(int i=0; i<10; i++){
        hash[arr[i]]++;
    }

    for(int i=0; i<10; i++){
        cout<<hash[i]<<" ";
    }

    return 0;
}