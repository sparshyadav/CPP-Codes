#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
}

void insertAtTail(Node* &head, int val){
    Node* newNode=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertAtKthPosition(Node* &head, int val, int k){
    Node* newNode =new Node(val);
    if(k==0){
        insertAtHead(head, val);
        return;
    }
    int currentPos=0;
    Node* temp=head;
    while(currentPos!=k-1){
        temp=temp->next;
        currentPos++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void updateAtKthPosition(Node* &head, int val, int k){
    Node* temp=head;
    int currentPos=0;
    while(currentPos!=k){
        temp=temp->next;
        currentPos++;
    }
    temp->val=val;
}

void deleteAtHead(Node* &head){
    Node* temp=head;
    head=head->next;
    free(temp);
}

void deleteAtTail(Node* &head){
    Node* temp=head;
    while(temp->next->next=NULL){
        temp=temp->next;
    }
    Node* temp2=temp->next;
    temp->next=NULL;
    free(temp2);
}

void deleteAtKthPosition(Node* &head. int k){
    Node*temp=head;
    int currPos=0;
    while(currpos!=k-1){
        temp=temp->next;
    }
    Node* del=temp->next;
    temp->next=temp->next->next;
    delete del;
}

void Display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    // Node* n=new Node(1);
    // cout<<n->val<<" "<<n->next;

    Node* head=NULL;
    insertAtHead(head, 2);
    Display(head);
    insertAtHead(head, 5);
    Display(head);
    insertAtTail(head, 10);
    Display(head);
    insertAtTail(head, 15);
    Display(head);
    insertAtKthPosition(head, 7, 2);
    Display(head);
    updateAtKthPosition(head, 100, 4);
    Display(head);
    deleteAtHead(head);
    Display(head);
    deleteAtTail(head);
    Display(head);

    return 0;

}