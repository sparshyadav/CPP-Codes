// Write a program to count all the pairs in an array that will add upto a certain element.
#include<iostream>
using namespace std;

int countPairs(int arr[], int size, int sum){
    int count=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i]+arr[j]==sum){
                count++;
            }
        }
    }
    return count;
}

int main(){

    int arr[5];
    cout << "Enter the Elements of the array: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int sum;
    cout<<"Enter the value of sum";
    cin>>sum;

    int count=countPairs(arr, 5, sum);
    cout<<count;


    return 0;
}