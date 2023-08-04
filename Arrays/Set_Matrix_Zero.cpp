#include<iostream>
#include<array>
using namespace std;

int main(){

    int arr[3][4]={1,2,3,4,5,6,7,8,9,10.11,12};
   
    cout<<"Before Setting Zero";
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            if(arr[i][j]==0){
                for(int x=i; x<=i; x++){
                    arr[x][j]=0;
                }
                for(int y=j; y<=j; y++){
                    arr[y][i]=0;
                }
            }
        }
    }

    cout<<"After Setting Zero";
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}