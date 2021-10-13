//BST - Binary Search Tree
#include<bits/stdc++.h>
using namespace std;
struct Tree
{
    int data;
    Tree *left;
    Tree *right;
};
Tree* newNode(int num){
    Tree *node = new Tree;
    node->data = num;
    node->left = NULL;
    node->right = NULL;
    return node;
}
Tree* createTree(Tree* root, int num){
    if(!root){
        Tree *temp = newNode(num);
        root = temp;
        return root;
    }
    if(root->data > num ){
        root->left = createTree(root->left, num);
    }
    else{
        root->right = createTree(root->right, num);
    }
    return root;
}
void inorder(Tree *curr){
    if(!curr)
        return;
    inorder(curr->left);
    cout << curr->data << " ";
    inorder(curr->right);
}
void preorder(Tree *curr){
    if(!curr)
        return;
    cout << curr->data << " ";
    preorder(curr->left);
    preorder(curr->right);
}
void postorder(Tree *curr){
    if(!curr)
        return;
    postorder(curr->left);
    postorder(curr->right);
    cout << curr->data << " ";
}

int main(){
    Tree *root = NULL;
    int num;
    cout << "Enter your first node in tree=";
    cin >> num;
    root = createTree(root, num);
    char choice = 'y';
    while(choice=='y'){
        cout << "Do you want to enter more nodes?\n Press 'y' for yes or 'n' to exit\n";
        cin >> choice;
        if(choice=='y'){
            cout << "Enter next node=";
            cin >> num;
            root = createTree(root, num);
        }
    }
    cout << "Inorder traversel of tree: ";
    inorder(root);
    cout << "\n";
    cout << "Preorder traversel of tree: ";
    preorder(root);
    cout << "\n";
    cout << "Postorder traversel of tree: ";
    postorder(root);
    cout << "\n";
    return 0;
}