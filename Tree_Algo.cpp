
#include <bits/stdc++.h>
using namespace std;
 
class node
{
    public:
    int data;
    node* left, *right;
}
node* newNode(int data)
{
    node* node = new node(data);
    node->data  = data;
    node->left  = node->right = NULL;
    return(node);
}
node* LCA(node *root, int n1, int n2)
{
   
   if(n1 < root->data && n2 < root->data)
   return LCA(root->left,n1,n2);
   else if(n1 > root->data && n2 > root->data)
   return LCA(root->right,n1,n2);
   else return root;
}
int main()
{
    
     node *root        = newNode(20);
    root->left               = newNode(8);
    root->right              = newNode(22);
    root->left->left         = newNode(4);
    root->left->right        = newNode(12);
    root->left->right->left  = newNode(10);
    root->left->right->right = newNode(14);
 
    int n1 = 10, n2 = 14;
    node *t = lca(root, n1, n2);
    printf("LCA of %d and %d is %d \n", n1, n2, t->data);
 
    n1 = 14, n2 = 8;
    t = lca(root, n1, n2);
    printf("LCA of %d and %d is %d \n", n1, n2, t->data);
 
    n1 = 10, n2 = 22;
    t = lca(root, n1, n2);
    printf("LCA of %d and %d is %d \n", n1, n2, t->data);
 
    
    return 0;
}