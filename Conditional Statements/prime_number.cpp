// Program to check whether a number is prime or not.

#include<iostream>
using namespace std;

int main(){

     int num;
    cout << "Enter a number: \n";
    cin >> num;

   for(int counter=2; counter<num; counter++){
       if(num%counter==0){
           cout<<"The number is non prime"<<endl;
           break;
       }
      
   }
    cout<<"The number is prime";
    return 0;
}