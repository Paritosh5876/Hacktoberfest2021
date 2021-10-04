#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

//This variable will count the inversion in the peroeder Array by using merged sort
int countinversion=0;

//This will bulit the binary search tree with perorder and inorder
struct node* bulid_preoreder(int st,int end,vector<int> v1,int *v2)
{
  static int i=0;
  if(st>end)
   return NULL;
  int curr=v1[i];
  i++;
  struct node* root=new node(curr);
  int pos;
  if(st==end)
   return root;
  for(int j=st;j<=end;j++)
  {
    if(curr==v2[j])
    {
      pos=j;
      break;
    }
  }
  root->left=bulid_preoreder(st,pos-1,v1,v2);
  root->right=bulid_preoreder(pos+1,end,v1,v2);

  return root;
}
//This will find the preorder of function with recursion it is bulit to check that the tree bulit from per and inorder is correct or not
void inorderfun(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderfun(root->left);
    cout << root->data << " ";
    inorderfun(root->right);
}

//Merge Sort to finnd the count inversion and inorder of the binary search tree
void merge(int *array, int l, int m, int r)
{
    int i, j, k, nl, nr;
    //size of left and right sub-arrays
    nl = m - l + 1;
    nr = r - m;
    int larr[nl], rarr[nr];
    //fill left and right sub-arrays
    for (i = 0; i < nl; i++)
        {
            larr[i]=array[l + i];
        }

    for (j = 0; j < nr; j++)
        rarr[j]=array[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    //marge temp arrays to real array
    while (i < nl && j < nr)
    {
        if (larr[i] <= rarr[j])
        {
            array[k] = larr[i];
            i++;
        }
        else
        {
            array[k] = rarr[j];
            j++;
            countinversion+=nl-i;
        }
        k++;
    }
    while (i < nl)
    { //extra element in left array
        array[k] = larr[i];
        i++;
        k++;
    }
    while (j < nr)
    { //extra element in right array
        array[k] = rarr[j];
        j++;
        k++;
    }
}

void mergeSort(int *array, int l, int r)
{
    int m;
    if (l < r)
    {
        int m = l + (r - l) / 2;
        // Sort first and second arrays
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);
        merge(array, l, m, r);
    }
}

//This section is for finding the LCA and in this function we will find the path of that element from the root
bool getpath(struct node* root,vector<int> &path,int n){
    if(root==NULL)
     return false;
    path.push_back(root->data);
    if(root->data==n)
     return true;
    if(getpath(root->left,path,n)||getpath(root->right,path,n))
     return true;
    path.pop_back();
    return false;  
}

//This will find the distinct element in the path of the two number that will be the LCA of that 2 no.'s
int lca(struct node *root,int n1,int n2){
    if(root->data==n1||root->data==n2)
     return -1;
    vector<int> path1,path2;
    if(getpath(root,path1,n1)&&getpath(root,path2,n2))
     {
         int i;
         for(i=0;i<path1.size()&&i<path2.size();i++)
          {
              if(path1[i]!=path2[i])
               break;
          }
          if(i==path1.size()) 
           return path2[path2.size()-path1.size()-1];
          else  if(i==path2.size()) 
           return path1[path1.size()-path2.size()-1];
          return path1[i-1];
     } 
     return -1;
}

//This section is for Printing the Border of the tree
//This function will print the leaves element if that tree
void printLeaf(struct node* root)
{
	if (root == NULL)
		return;

	printLeaf(root->left);

	// Print it if it is a leaf node
	if (!(root->left) && !(root->right))
		printf("%d ", root->data);

	printLeaf(root->right);
}

//This function will print the full border of the tree
void border(struct node*root){
    if(root==NULL)
     return;
    queue<struct node*> qu;
    stack<int> st;
    qu.push(root);

    //This is for left subtree
    while(!qu.empty()){
        int n=qu.size();
        for(int i=0;i<n;i++)
        {
            struct node* temp=qu.front();
            if((i==0)&&temp!=NULL&&(temp->left||temp->right))
             cout<<temp->data<<" ";
            else if(i==n-1&&temp!=NULL&&(temp->left||temp->right))
                   st.push(temp->data);
            qu.pop();
            if(temp!=NULL)
             qu.push(temp->left);
            if(temp!=NULL&&temp->right)
             qu.push(temp->right);   
        }
    }

    //This is for leaves element
    printLeaf(root);

    //This is for right subtree
   while(!st.empty()){
       cout<<st.top()<<" ";
       st.pop();
   } 

}

//This will find the mirror tree of the given tree
void mirrortree(struct node*root){
    if(root==NULL)
     return;
    struct node* left=root->left;
    root->left=root->right;
    root->right=left;
    mirrortree(root->left);
    mirrortree(root->right) ;
}

int main()
{
    int n, elem, i;
    cout << "Enter the no of node of Binary Tree: ";
    cin >> n;
    vector<int> post;
    int inorder[n];

    cout << "Enter the PERORDER of Binary Tree: ";
    for (i = 0; i < n; i++)
    {
        cin >> elem;
        post.push_back(elem);
        inorder[i]=elem;
    }

    mergeSort(inorder, 0, n - 1);

    //Buliding of binary tree
   struct node *root = bulid_preoreder(0, n - 1, post, inorder);
   cout<<"INORDER of the BST bulit from above PERORDER: ";
   inorderfun(root);

    //LCA of the two no.'s
    int n1,n2;
    cout<<"\nEnter the value of the two nodes whose lca is to find: ";
    cin>>n1>>n2;
    cout<<"LCA of "<<n1<<" and "<<n2<<"= "<<lca(root,n1,n2);

    //Boundary order of the BST
    cout<<"\n-------------BORDER of the BST--------------\n";
    border(root);

    //Mirror of the tree
    mirrortree(root);
    cout<<"\nINORDER of the binary tree that is mirror image of the given BST: ";
    inorderfun(root);

    //Count Inversion in the Preorder array
    cout<<"\nCount in the above Preorder array: ";
    cout<<countinversion;
}