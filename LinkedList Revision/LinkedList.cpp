#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, int val)
{
    Node *temp = head;

    while (temp->next)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(val);
    temp->next = newNode;
}

void insertAtKthPosition(Node *&head, int val, int k)
{
    Node *temp = head;

    while (k - 1 != 1)
    {
        temp = temp->next;
        k--;
    }

    Node *nexxt = temp->next;
    Node *newNode = new Node(val);
    temp->next = newNode;
    newNode->next = nexxt;
}

void display(Node *head)
{
    Node *temp = head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 3);
    display(head);
    insertAtHead(head, 4);
    display(head);
    insertAtHead(head, 5);
    display(head);
    insertAtHead(head, 6);
    display(head);

    insertAtTail(head, 7);
    display(head);
    insertAtTail(head, 8);
    display(head);

    insertAtKthPosition(head, 9, 3);
    display(head);
    insertAtKthPosition(head, 10, 5);
    display(head);

    return 0;
}