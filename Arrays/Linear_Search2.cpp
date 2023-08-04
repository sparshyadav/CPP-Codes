#include<iostream>
using namespace std;

int ls(int arr[], int x, int n){
    for(int i; i<n; i++){
        if(arr[i]==x)
        return i;
    return -1;
    }
}

int main(){

    int arr[5]={1,2,3,4,5};
    int x=3;
    int n= sizeof(arr)/sizeof(arr[0]);

    ls(arr, n,x);

    return 0;
}