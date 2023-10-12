#include<bits/stdc++.h>
using namespace std;

int minJump(vector<int> arr, int idx){
    if(idx==arr.size()-1){
        return 0;
    }
    int option1=abs(arr[idx]-arr[idx+1])+minJump(arr, idx+1);
    if(idx==arr.size()-2){
        return option1;
    }
    int option2=abs(arr[idx]-arr[idx+1])+minJump(arr, idx+2);

    return min(option1, option2);
}

int main(){

    vector<int> arr={10, 30, 40, 20};
    int ans=minJump(arr, 0);
    cout<<"The Minimum Cost of Jumps is: "<<ans;

    return 0;
}