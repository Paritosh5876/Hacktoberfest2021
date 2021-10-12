#include <bits/stdc++.h>

using namespace std;

//Author : Swoyam S Sahoo
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
void printleftrightview(struct Node *root)
{
    int k, i;
    map<int, list<struct Node *>> mp;
    queue<struct Node *> q1;
    queue<int> q2;
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
            q2.push(k + 1);
        }
        if (temp->right != NULL)
        {
            q1.push(temp->right);
            q2.push(k + 1);
        }
        mp[k].push_front(temp);
    }
    cout << "the right view of the tree is\n";
    for (auto i : mp)
    {
        cout << i.second.front()->data << " ";
    }
    cout << endl;
    cout << "the left view of the tree is\n";
    for (auto i : mp)
    {
        cout << i.second.back()->data << " ";
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
    printleftrightview(root);
    return 0;
}
