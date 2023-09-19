#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[10]={1, 2, 3, 4, 5, 1, 2, 1, 12, 2};

    map<int, int> mpp;
    for(int i=0; i<10; i++){
        mpp[arr[i]]++;
    }

    for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}