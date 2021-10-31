#include <bits/stdc++.h>
using namespace std;

// Tree node structure
class Node {
public:
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// Function to print the sum of leaf nodes
// at each horizontal level
void printLevelSum(Node* root)
{
    if (root == NULL) {
        cout << "No nodes present\n";
        return;
    }

    // Map to hold sum at each level
    map<int, int> mp;

    // Queue to hold tree node with level
    queue<pair<Node*, int> > q;

    // Root node is at level 1
    q.push({ root, 1 });

    pair<Node*, int> p;

    // Level Order Traversal of tree
    while (!q.empty()) {
        p = q.front();
        q.pop();

        // Create a key for each level
        // in the map
        if (mp.find(p.second) == mp.end()) {
            mp[p.second] = 0;
        }

        // If current node is a leaf node
        if (p.first->left == NULL
            && p.first->right == NULL) {

            // Adding value in the map
            // corresponding to its level
            mp[p.second] += p.first->data;
        }

        if (p.first->left)
            q.push({ p.first->left, p.second + 1 });
        if (p.first->right)
            q.push({ p.first->right, p.second + 1 });
    }

    // Print the sum at each level
    for (auto i : mp) {
        cout << i.second << endl;
    }
}

// Driver Code
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->right = new Node(8);
    root->left->right->right = new Node(9);
    root->right->right->left = new Node(10);
    root->right->right->right = new Node(11);
    root->left->left->right->right = new Node(12);

    printLevelSum(root);

    return 0;
}
