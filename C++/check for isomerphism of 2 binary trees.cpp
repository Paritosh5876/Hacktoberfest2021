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

bool check(struct Node*root1,struct Node* root2)
{
    if(root1==NULL&&root2==NULL)
    {
        return true;
    }
    else if(root1==NULL||root2==NULL)
    {
        return false;
    }
    else if(root1->data!=root2->data)
    {
        return false;
    }
    else if((check(root1->left,root2->left)&&(check(root1->right,root2->right)))||(check(root1->left,root2->right)&&(check(root1->right,root2->left))))
    {
        return true;
    }
}
int main()
{
    struct Node* root1 = NULL;
    root1 = create(1);
    root1->left = create(2);
    root1->right = create(3);

    struct Node* root2 = NULL;
    root2 = create(1);
    root2->left = create(3);
    root2->right = create(2);
    if(check(root1,root2)==true)
    {
        cout<<"they are isomers\n";
    }
    else{
        cout<<"they are not isomers\n";
    }
    return 0;
}
