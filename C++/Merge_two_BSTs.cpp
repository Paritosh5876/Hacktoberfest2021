#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000
// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node* buildTree(string str)
{
   // Corner Case
   if(str.length() == 0 || str[0] == 'N')
       return NULL;

   // Creating vector of strings from input
   // string after spliting by space
   vector<string> ip;

   istringstream iss(str);
   for(string str; iss >> str; )
       ip.push_back(str);

   // Create the root of the tree
   Node* root = new Node(stoi(ip[0]));

   // Push the root to the queue
   queue<Node*> queue;
   queue.push(root);

   // Starting from the second element
   int i = 1;
   while(!queue.empty() && i < ip.size()) {

       // Get and remove the front of the queue
       Node* currNode = queue.front();
       queue.pop();

       // Get the current node's value from the string
       string currVal = ip[i];

       // If the left child is not null
       if(currVal != "N") {

           // Create the left child for the current node
           currNode->left = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->left);
       }

       // For the right child
       i++;
       if(i >= ip.size())
           break;
       currVal = ip[i];

       // If the right child is not null
       if(currVal != "N") {

           // Create the right child for the current node
           currNode->right = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->right);
       }
       i++;
   }

   return root;
}

class Solution
{
    public:
    //Function to return a list of integers denoting the node
    //values of both the BST in a sorted order.

    //inordere traversal
    void l(Node*root, vector<int> &a){

        if(root==NULL) return;
        if(root->left!=NULL) l(root->left, a);
        a.push_back(root->data);
        if(root->right!=NULL) l(root->right, a);
    }

    vector<int> merge(Node *root1, Node *root2)
    {

        vector<int> ans;

        stack<Node*> s1, s2;
        Node* current1 = root1, *current2 = root2;

        while(current1!=NULL or current2!=NULL or !s1.empty() or !s2.empty()){
            while(current1!=NULL){
                s1.push(current1);
                current1 = current1->left;
            }
            while(current2!=NULL){
                s2.push(current2);
                current2 = current2->left;
            }

            if(!s1.empty() and !s2.empty()){
                current1 = s1.top();
                s1.pop();
                current2 = s2.top();
                s2.pop();

                if(current1->data < current2->data){
                    ans.push_back(current1->data);
                    s2.push(current2);
                    current2 = NULL;
                    current1 = current1->right;
                }
                else if(current1->data > current2->data){
                    ans.push_back(current2->data);
                    s1.push(current1);

                    current2 = current2->right;
                    current1 = NULL;
                }

                else{
                    ans.push_back(current1->data);
                    ans.push_back(current2->data);
                    current1 = current1->right;
                    current2 = current2->right;
                }
            }

            else if(!s2.empty()){
                current2 = s2.top();
                s2.pop();
                ans.push_back(current2->data);
                current2 = current2->right;
            }

            else if(!s1.empty()){
                current1 = s1.top();
                s1.pop();
                ans.push_back(current1->data);
                current1 = current1->right;
            }
        }


        return ans;
    }
};
int main() {

   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   while(t--)
   {
        string s;
       getline(cin, s);
       Node* root1 = buildTree(s);

       getline(cin, s);
       Node* root2 = buildTree(s);

       Solution obj;
       vector<int> vec = obj.merge(root1, root2);
       for(int i=0;i<vec.size();i++)
            cout << vec[i] << " ";
        cout << endl;
   }
   return 0;
}
