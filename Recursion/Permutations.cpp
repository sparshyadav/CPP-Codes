#include<bits/stdc++.h>
using namespace std;

void permutations(vector<int> nums, vector<vector<int>> &ans, int idx){
    if(idx==nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i=idx; i<nums.size(); i++){
        swap(nums[idx], nums[i]);
        permutations(nums, ans, idx+1);
        swap(nums[idx], nums[i]);
    }
}

int main(){

    vector<int> nums={1, 2, 3};
    vector<vector<int>> ans;
    
    permutations(nums, ans, 0);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}