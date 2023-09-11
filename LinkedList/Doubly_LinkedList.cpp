#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
};

int main(){

    Node* newNode=new Node(3);
    DoublyLinkedList dll;
    dll.head=newNode;
    dll.tail=newNode;

    cout<<dll.head->val<<endl;

    return 0;
}