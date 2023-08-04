#include<iostream>
using namespace std;

int main(){

    int arr[20]={0, 1, 2, 3, 1, 3, 1, 2, 3, 4, 5, 4, 3, 2, 1, 2, 3, 1, 2, 3};
    int ans[6];
    
    for(int i=0; i<arr.size(); i++){
        ans[arr[i]]++;
    }

    for(int i=0; i<ans.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}