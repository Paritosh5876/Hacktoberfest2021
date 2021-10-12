#include <bits/stdc++.h>
using namespace std;

// Author: Swoyam S Sahoo

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *newnode(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
void printtopbuttom(struct Node *root)
{
    int k;
    queue<struct Node *> q1;
    queue<int> q2;
    map<int, list<struct Node *>> mp;
    q1.push(root);
    q2.push(0);
    while (!q1.empty())
    {
        struct Node *temp = q1.front();
        k = q2.front();
        q1.pop();
        q2.pop();
        if (temp->left != NULL)
        {
            q1.push(temp->left);
            q2.push(k - 1);
        }
        if (temp->right != NULL)
        {
            q1.push(temp->right);
            q2.push(k);
        }
        mp[k].push_back(temp);
    }
    cout << "the diagonal view of the tree is:\n";
    int i;
    for (auto i : mp)
    {
        while (!i.second.empty())
        {
            cout << i.second.front()->data << " ";
            i.second.pop_front();
        }
        cout << endl;
    }
}
int main()
{
    struct Node *root = NULL;
    root = newnode(1);
    root->left = newnode(2);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right = newnode(3);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    root->right->left->right = newnode(8);
    printtopbuttom(root);
    return 0;
}