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

int main()
{
    Node *head = new Node(4);
    cout << head->data<<endl;
    cout << head->next<<endl;

    return 0;
}