//C++ Program to find diameter of a binary tree
//Diamete of a binary tree is Number of Nodes in the longest Path between two leaves of the binary tree.
#include <bits/stdc++.h>
using namespace std;
 
/* Tree node structure used in the program */
struct Node {
    int data;
    Node* left, *right;
};
 
//Function to find height of a tree 
int height(Node* root, int& ans)
{
    if (root == NULL)
        return 0;
 
    int left_height = height(root->left, ans);
 
    int right_height = height(root->right, ans);
 
    ans = max(ans, 1 + left_height + right_height);
 
    return 1 + max(left_height, right_height);
}
 
// Computes the diameter of binary tree with given root. 
int diameter(Node* root)
{
    if (root == NULL)
        return 0;
    int ans = INT_MIN; 
    height(root, ans);
    return ans;
}
 
struct Node* newNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
 
    return (node);
}
 
// Driver code
int main()
{
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    int ans = diameter(root);

    cout<<"Diameter of the given binary tree is "<<ans<<endl;
 
    return 0;
}