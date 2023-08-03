#include<iostream>
using namespace std;

void bubbleSort(int &arr[], int size) {
//   for (int step = 0; step < size; ++step) {
//     for (int i = 0; i < size - step; ++i) {
//       if (array[i] > array[i + 1]) {
//         int temp = array[i];
//         array[i] = array[i + 1];
//         array[i + 1] = temp;
//       }
//     }
//   }

    if(size==0 || size==1){
        return;
    }
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    bubbleSort(arr, size-1);
}

int main(){

    int arr[5]={3, 5, 2, 4, 1};
    cout<<"Before Sorting: ";
    bubbleSort(arr, 5);
    cout<<"After Sorting: ";

    return 0;
}