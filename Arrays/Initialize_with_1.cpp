// Write a program to create an array and initialize it with a single number only.
#include<iostream>
using namespace std;

int main(){

    int arr[10];

    // Using fill_n command to initialize the entire array with 1.
    fill_n(arr, 10, 1);

    for(int i=0; i<=9; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int num[5];

    // Using fill_n command to initialize the entire array with 5.
    fill_n(num, 5, 5);

    for(int i=0; i<5; i++){
        cout<<num[i]<<" ";
    }

    return 0;
}