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

int maxDepth(Node* rootNode){
    if(rootNode->right==NULL || rootNode->left==NULL){
        return 1;
    }
    int sum=maxDepth(rootNode->left)+maxDepth(rootNode->right);
    return sum;
}

int main()
{
    Node *rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(11);
    rootNode->right->right->right=new Node(12);

    int sum=maxDepth(rootNode);
    cout<<"The Maximum Depth of the Tree is: "<<sum<<endl;

    return 0;
}