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

void levelorderTraversal(Node *rootNode)
{
    if (rootNode == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(rootNode);

    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            Node *currNode = q.front();
            q.pop();
            if (currNode->left)
            {
                q.push(currNode->left);
            }
            if (currNode->right)
            {
                q.push(currNode->right);
            }
            cout << currNode->value << " ";
        }
        cout << endl;
    }
}

vector<int> rightMostNode(Node *rootNode)
{
    vector<int> ans;
    if (rootNode == NULL)
    {
        return ans;
    }

    queue<Node *> q;
    q.push(rootNode);

    while (!q.empty())
    {
        int size = q.size();
        while (size)
        {
            Node *currNode = q.front();
            q.pop();

            if (size == 1)
            {
                ans.push_back(currNode->value);
            }
            if (currNode->left)
            {
                q.push(currNode->left);
            }
            if (currNode->right)
            {
                q.push(currNode->right);
            }
            size--;
        }
    }
    return ans;
}

int main()
{
    Node *rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->left->right = new Node(12);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(11);
    // rootNode->right->right->right=new Node(12);

    // levelorderTraversal(rootNode);

    vector<int> ans = rightMostNode(rootNode);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}