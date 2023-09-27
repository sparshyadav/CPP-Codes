#include<bits/stdc++.h>
using namespace std;

int majority(int arr[], int n){
    int count=0;
    int element;
    for(int i=0; i<n; i++){
        if(count==0){
            element=arr[i];
            count=1;
        }
        else if(arr[i]==element){
            count++;
        }
        else{
            count--;
        }
    }

    count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==element){
            count++;
        }
    }
    
    if(count>n/2){
        return element;
    }
    return 0;
}

int main(){

    int arr[8]={3, 2, 3, 1, 3, 4, 3, 5};
    int result=majority(arr, 8);
    cout<<"The Majority Element is: "<<result;

    return 0;
}