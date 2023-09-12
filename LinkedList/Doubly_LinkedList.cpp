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

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void insertAtStart(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->next=head;
        head->prev=newNode;
        newNode->prev=NULL;
        head=newNode;
        return;
    }

    void insertAtTail(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
        newNode->next=NULL;
        return;
    }

    void insertAtKthPosition(int pos, int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        Node* temp=head;
        int count=1;
        while(temp->next!=NULL && count<(pos-1)){
            temp=temp->next;
            count++;
        }
        newNode->next=temp->next;
        newNode->next->prev=newNode;
        newNode->prev=temp;
        temp->next=newNode;
        return;
    }

    void deleteAtHead(){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        head=temp->next;
        head->prev=NULL;
        return;
    }

    void deleteAtTail(){
        if(tail==NULL){
            return;
        }
        tail=tail->prev;
        tail->next=NULL;
        return;
    }

    void deleteAtKthPosition(int pos){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        int count=1;
        while(temp->next!=NULL && count<pos-1){
            temp=temp->next;
            count++;
        }
        temp->next=temp->next->next;
        temp->next->prev=temp;
        return;
    }
};

int main(){

    // Node* newNode=new Node(3);
    DoublyLinkedList dll;
    // dll.head=newNode;
    // dll.tail=newNode;

    // cout<<dll.head->val<<endl;

    dll.insertAtStart(1);
    dll.insertAtStart(2);
    dll.insertAtStart(3);

    dll.display();

    dll.insertAtTail(4);
    dll.insertAtTail(5);
    dll.insertAtTail(6);

    dll.display();

    dll.insertAtKthPosition(3, 7);
    dll.insertAtKthPosition(5, 10);

    dll.display();

    dll.deleteAtHead();

    dll.display();

    dll.deleteAtHead();

    dll.display();  

    dll.deleteAtTail();

    dll.display();

    dll.deleteAtTail();

    dll.display(); 

    dll.insertAtTail(12);
    dll.insertAtTail(15);
    dll.insertAtTail(18);

    dll.display(); 

    dll.deleteAtKthPosition(3);
    dll.deleteAtKthPosition(5);

    dll.display();

    return 0;
}