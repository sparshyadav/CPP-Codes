#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    if(start>=end){
        return;
    }
    swap(arr[start], arr[end]);
    reverse(arr, ++start, --end);
}

int main(){

    int arr[5]={3, 5, 2, 6, 1};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverse(arr, 0, 5);
    for(int j=0; j<5; j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}