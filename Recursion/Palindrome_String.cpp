#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string &str, int start){
    int n=str.length();
    if(start>=n/2){
        return true;
    }
    if(str[start]!=str[n-start-1]){
        return false;
    }
    return isPalindrome(str, start+1);
}

int main(){

    string str="madan";
    bool ans=isPalindrome(str, 0);
    cout<<ans;

    return 0;
}