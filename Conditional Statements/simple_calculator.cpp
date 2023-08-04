//  A simple calculator for two number operations.
 
 #include<iostream>
 using namespace std;

 int main(){

     int num1, num2;
     cout<<"Enter the Numbers: \n";
     cin>>num1>>num2;

     char op;
     cout<<"Enter the Operator: \n";
     cin>>op;

     switch (op)
     {
     case '+':
         cout<<num1+num2<<endl;
         break;
         case '-':
         cout<<num1-num2<<endl;
         break;
         case '*':
         cout<<num1*num2<<endl;
         break;
         case '/':
         cout<<num1/num2<<endl;
         break;
     
     default:
     cout<<"Enter another Operator"<<endl;
         break;
     }
     return 0;
 }