#include<iostream>
#include<array>
using namespace std;

int main(){

    int arr[3][4]={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    cout<<"After Setting Zero";
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}