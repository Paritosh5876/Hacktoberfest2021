#include<bits/stdc++.h>

using namespace std;


// Structure for BST Node 
struct node {
	int val;
	node *left,*right;
	node(int v) {
		val = v;
		left=right=NULL;
	}
};


// Function to build Balanced BST
// v - sorted list
// l - left index of array segment
// r - right index of array segment

node *build_bst(vector<int> &v, int l,int r) {
	if(l>r) return NULL;  // Incase left index is greater than right index
	
	if(l==r) return new node(v[l]); // Only one node left in this segment

	int mid = (l+r)/2;
	node *ret = new node(v[mid]); // Root for this subtree segment

	ret->left = build_bst(v,l,mid-1); // Left will have lower values
	ret->right = build_bst(v,mid+1,r); // Right will have higher values

	return ret;
}


// Print inorder of bst as it is in ascending order
void print_inorder(node *n) {
	if(n==NULL) return;
	print_inorder(n->left);
	cout<<n->val<<" ";
	print_inorder(n->right);
	return;
}

int main() {
	int n; // Size of List
	cout<<"Enter size of List: ";
	cin>>n;
	cout<<"Enter List Numbers: ";
	vector<int> v(n); // List of numbers
	for(int i=0;i<n;i++) {
		cin>>v[i];
	}
	sort(v.begin(),v.end()); // Sort the List

	node *bst = build_bst(v,0,n-1);
	print_inorder(bst); // Must be ascending order
	return 0;
}