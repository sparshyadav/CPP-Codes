#include<iostream>
using namespace std;

bool checkPalindrome(string str, int start, int end){
    if(start>end){
        return true;
    }
    if(str[start]!=str[end]){
        return false;
    }
    else{
        start++;
        end--;
        checkPalindrome(str, start, end);
    }
    return true;
}

int main(){

     string str="abbccbba";
     cout<<checkPalindrome(str, 0, str.length()-1);

    return 0;
}