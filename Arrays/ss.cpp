#include<iostream>
using namespace std;

void ss(int arr[], int n){
    int min=arr[0];
    for(int i=1; i<n; i++){
        if(min>arr[i]){
            int temp=min;
            min=arr[i];
            arr[i]=temp;
        }
        min=arr[i+1];
    }
}

int main(){

    int arr[7]={3,5,2,6,23,675,754};
    ss(arr, 7);
    cout<<ss;

    return 0;
}