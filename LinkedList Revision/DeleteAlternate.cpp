#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void insert(int val)
    {
        Node *newNode = new Node(val);

        if (!head)
        {
            head = newNode;
            return;
        }
        else
        {
            Node *temp = head;

            while (temp->next)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    void display()
    {
        Node *temp = head;

        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

void deleteAlternateNodes(Node *&head)
{
    Node *temp = head;

    while (temp && temp->next)
    {
        Node *nexxt = temp->next->next;
        delete temp->next;
        temp->next = nexxt;
        temp = temp->next;
    }
}

int main()
{
    LinkedList ll;
    for (int i = 1; i <= 5; i++)
    {
        ll.insert(i);
    }

    ll.display();
    deleteAlternateNodes(ll.head);
    ll.display();

    return 0;
}