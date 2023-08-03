#include<iostream>
#include<vector>
using namespace std;

 vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int size=nums.size();
        for(int i=0; i<2*size; i++){
            if(i<size){
                ans[i]==nums[i];
            }
            if(i>size-1){
                ans[i+size]==nums[i];
            }
        }
        return ans;
    }

    void printArray(int arr[], int size){
    for(int i=0; i<size; i++){s
        cout<<arr[i]<<" ";
    }
}

int main(){

    int nums[3]={1,2,1};
    int con=getConcatenation(nums);
    printArray(nums, 6);

    return 0;
}