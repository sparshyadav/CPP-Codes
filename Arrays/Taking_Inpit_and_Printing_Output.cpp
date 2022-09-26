// Write a program to take input from the user to fill an array, and print the values stored in the array.
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[10];

    for(int i=0; i<10; i++){
        cin>>arr[i];
    }

    printArray(arr, 10);

    return 0;
}