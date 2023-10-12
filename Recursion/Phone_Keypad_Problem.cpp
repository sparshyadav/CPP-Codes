#include<bits/stdc++.h>
using namespace std;

void combination(vector<string> &ans, string digits, string &output, int idx, vector<string> mapping){
    if(idx==digits.length()){
        ans.push_back(output);
        return;
    }
    int number=digits[idx]-'0';
    string value=mapping[number];

    for(int i=0; i<value.length(); i++){
        output.push_back(value[i]);
        combination(ans, digits, output, idx+1, mapping);
        output.pop_back();
    }
}

int main(){

    string digits="23";
    vector<string> mapping={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string output="";
    vector<string> ans;
    combination(ans, digits, output, 0, mapping);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}