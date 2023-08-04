#include<iostream>
using namespace std;

// int bubblesort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i; j++){
//             if(arr[j]>arr[j+1])
//             swap(arr[j], arr[j+1]);
//         }
//     }
// }

int main(){

    int arr[7]={2,4,5,7,9,6,3};
    // cout<<bubblesort(arr, 7);

    int n= sizeof(arr[n]/arr[0]);

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
     return 0;
    
}

   
