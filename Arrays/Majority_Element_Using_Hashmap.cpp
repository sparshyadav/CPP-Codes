#include<bits/stdc++.h>
using namespace std;

int majority(int arr[], int n){
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    int ans=0;
    for(auto it: mpp){
        if(it.second>n/2){
            ans=it.first;
        }
    }
    return ans;
}

int main(){

    int arr[7]={2, 2, 1, 1, 1, 2, 2};
    int result=majority(arr, 7);
    cout<<"The Majority Element is: "<<result;

    return 0;
}