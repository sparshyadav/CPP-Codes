// Write a program to reverse a string.
#include<iostream>
using namespace std;

int stringLength(char ch[], int size){
    int count=0;
    for(int i=0; i<size; i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            count++;
        }
    }
    return count;
}

void reverseString(char ch[], int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(ch[start++], ch[end--]);
    }
}

int main(){

    char ch[20];
    cout<<"Enter the String: "<<endl;
    cin>>ch; 
    
    int len=stringLength(ch, 20);
    reverseString(ch, len);

    cout<<ch;

    return 0;
}