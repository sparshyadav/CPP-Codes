#include<iostream>
using namespace std;

int SelSort(int arr[], int size){
    for(int i=0; i<=size-1; i++){
        int minIndex=i;
        for(int j=i+1; j<size; j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

}

int main(){

int arr[9]={3,6,8,5,2,4,7,1,9};
SelSort(arr, 9);
    return 0;
}