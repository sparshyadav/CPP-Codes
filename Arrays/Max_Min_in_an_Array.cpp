// Write a program to find the maximum and minimum number of an array.
#include<iostream>
#include<climits>
using namespace std;

int max(int arr[], int size){
    int max= INT_MIN;
    for(int i=0; i<size; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int min(int arr[], int size){
    int min=INT_MAX;
    for(int i=0; i<size; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5];

    for(int i=0; i<10; i++){
        cin>>arr[i];
    }

   printArray(arr, 5);
   cout<<endl;

   int num1=max(arr, 5);
   cout<<"The maximum number in the array is: "<<num1<<endl;

   int num2=max(arr, 5);
   cout<<"The minimum number in the array is: "<<num2<<endl; 
    return 0;
}