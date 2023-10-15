#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int v)
    {
        value = v;
        left = right = NULL;
    }
};

void preorderTraversal(Node *rootNode)
{
    if (rootNode == NULL)
    {
        return;
    }
    cout << rootNode->value << " ";
    preorderTraversal(rootNode->left);
    preorderTraversal(rootNode->right);
}

void inorderTraversal(Node *rootNode)
{
    if (rootNode == NULL)
    {
        return;
    }
    inorderTraversal(rootNode->left);
    cout << rootNode->value << " ";
    inorderTraversal(rootNode->right);
}

void postorderTraversal(Node *rootNode)
{
    if (rootNode == NULL)
    {
        return;
    }
    postorderTraversal(rootNode->left);
    postorderTraversal(rootNode->right);
    cout << rootNode->value << " ";
}

int main()
{

    // Node* root=new Node(2);
    // root->left=new Node(3);
    // root->right=new Node(4);

    // cout<<"Root Node: "<<root->value<<endl;
    // cout<<"Right Node:"<<root->right->value<<endl;
    // cout<<"Left Node: "<<root->left->value<<endl;

    Node *rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(11);

    preorderTraversal(rootNode);
    cout << endl;
    inorderTraversal(rootNode);
    cout << endl;
    postorderTraversal(rootNode);
    cout << endl;

    return 0;
}