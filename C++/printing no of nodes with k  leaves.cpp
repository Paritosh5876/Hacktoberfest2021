#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* create(int n)
{
 struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
 temp->data = n;
 temp->left = NULL;
 temp->right = NULL;

 return temp;
}
int leaves(struct Node* root,int k)
{
    if(root==NULL)
    {
        return 0;
    }
    else if(root->left==NULL&&root->right==NULL)
    {
        return 1;
    }

    int lc = leaves(root->left,k);
    int rc = leaves(root->right,k);
    int tc = lc+rc;
    if(tc==k)
    {
        cout<<root->data<<" ";
    }
    return tc;
}

int main()
{
    struct Node* root = NULL;
    root = create(1);
    root->left = create(2);
    root->left->left = create(4);
    root->left->right = create(5);
    root->left->left->left = create(8);
    root->left->left->right = create(9);
    root->left->left->left->left = create(13);
    root->right = create(3);
    root->right->left = create(6);
    root->right->left->left = create(10);
    root->right->left->right = create(11);
    root->right->left->left->left = create(14);
    root->right->left->left->right = create(15);
    root->right->right = create(7);
    root->right->right->right = create(12);
    root->right->right->right->left = create(16);
    root->right->right->right->right = create(17);
    int k;
    cin>>k;
    leaves(root,k);

    return 0;
}
