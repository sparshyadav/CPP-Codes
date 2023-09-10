#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

class Stack{
    Node* head;
    int capacity;
    int currSize;
    public:
    Stack(int c){
        this->capacity=c;
        this->currSize=0;
        head==NULL;
    }

    bool isEmpty(){
        return this->head==NULL;
    }

    bool isFull(){
        return this->head->data=this->capacity;
    }

    void push(int data){
        if(!isFull()){
            Node* newNode=new Node(data);
            newNode->next=this->head;
            this->head=newNode;
            this->currSize++;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(!isEmpty()){
            Node* newHead=this->head->next;
            delete this->head;
            this->head=newHead;
        }
    }

    int size(){
        return currSize;
    }

    int getTop(){
        if(!isEmpty()){
            return this->head->data;
        }
    }
    
};

int main(){

    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.getTop();

    return 0;
}