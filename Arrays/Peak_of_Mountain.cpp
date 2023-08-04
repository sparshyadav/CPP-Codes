#include<iostream>
using namespace std;

int MountainPeak(int arr[], int size){
    int s=0;
    int e=size-1;
    int mid= s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main(){

    int arr[7]={1,2,3,4,5,4,3};
    cout<<"The Peak Element of the Mountain is: "<<MountainPeak(arr,7);
    return 0;
}