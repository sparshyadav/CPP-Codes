#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;

    Node(int x)
    {
        val = x;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }
};

void printLinkedList(Node *head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }

    cout << "nullptr";
    cout << endl;
};

void insertAtFront(Node *&head, int x)
{
    Node *newNode = new Node(x);
    newNode->next = head;
    head = newNode;
};

void insertAtEnd(Node *&head, int x)
{
    Node *newNode = new Node(x);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
};

void deleteNode(Node *head, int x)
{
    if (head == nullptr)
    {
        return;
    }

    Node *temp = head;
    if (head->val == x)
    {
        head = head->next;
        delete temp;
        return;
    }

    while (temp->next != nullptr && temp->next->val != x)
    {
        temp = temp->next;
    }

    if (temp->next == nullptr)
    {
        return;
    }

    Node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
};

int getLength(Node *head)
{
    int length = 0;
    Node *temp = head;

    while (temp != nullptr)
    {
        length++;
        temp = temp->next;
    }

    return length;
};

bool search(Node *head, int x)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        if (temp->val == x)
        {
            return true;
        }

        temp = temp->next;
    }

    return false;
};

int main()
{
    Node *head = nullptr;
    insertAtFront(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Linked List: ";
    printLinkedList(head);

    cout << "Length: " << getLength(head) << endl;

    cout << "Search 20: " << (search(head, 20) ? "Found" : "Not found") << endl;
    cout << "Search 40: " << (search(head, 40) ? "Found" : "Not found") << endl;

    deleteNode(head, 20);
    cout << "After deleting 20: ";
    printLinkedList(head);

    return 0;
}
