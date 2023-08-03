// Write a program to find the second largest element in an array.
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

int secondLargest(int arr[], int n){
    int largest=INT_MIN;
    int secLarge=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            secLarge=largest;
            largest=arr[i];
        }
    }
    return secLarge;
}

int main(){

    int arr[5]={23,34,23,36,64};
    cout<<"The Second Largest Element is "<<secondLargest(arr, 5);

    return 0;
}
