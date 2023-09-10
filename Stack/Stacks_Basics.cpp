#include<iostream>
using namespace std;

class Stack{
    int capacity;
    int* arr;
    int top;
    public:
    Stack(int c){
        this->capacity=c;
        arr=new int[c];
        this->top=-1;
    }
    void push(int data){
        if(this->top== this->capacity-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        this->top++;
        this->arr[this->top]=data; 
    }
    void pop(){
        if(this->top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        this->top--;
    }
    int top(){
        if(this->top==capacity-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        return this->arr[this->top];
    }
    bool isEmpty(){
        if(top==-1){
            return 1;
        }
        return 0;
    }
    bool isFull(){
        return this->top==capacity-1;
    }
    int size(){
        return this->top+1;
    }
};

int main(){



    return 0;
}