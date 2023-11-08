#include<bits/stdc++.h>
using namespace std;


struct node{
int data;
node*left,*right;
    node(int data){
        this->data = data;
        left=NULL;
        right = NULL;
    }
};

struct node* makeTree(int *a,int low,int high){
    struct node*root;
    int mid;
    if(low<=high){
        mid = (low + high)/2;
        root = new node(a[mid]);
        root->left = makeTree(a,low,mid-1);
        root->right = makeTree(a,mid+1,high);
        return root;
    }
    else{
        return NULL;
    }
}

void print(struct node*root){
    //Use Level order Traversal to print the tree.
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty())
                q.push(NULL);

        }
        else{
        cout<<temp->data<<" ";

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
            }
       }
    }
}

void printPostorder(struct node*root){
if(root){
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}

}

int main(){
int n;
cout<<"Enter the no of elements in the tree\n";
cin>>n;
int a[n];
cout<<"Enter the elements of the Tree\n";
for(int i=0;i<n;i++) cin>>a[i];
struct node*tree = makeTree(a,0,4);
print(tree);
cout<<"Post Order Traversal "<<endl;
printPostorder(tree);
return 0;
}
