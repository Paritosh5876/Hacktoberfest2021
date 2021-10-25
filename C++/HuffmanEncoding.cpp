#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
	int count;
	char letter;
    Node* left, *right;

    Node(int a, char b){
    	count = a;
    	letter = b;
    	left = right = NULL;
    }
};

class Compare{
  public:
    bool operator()(Node* n1, Node* n2){
		return n1->count > n2->count;
	}
};

void getCodes(Node *root, unordered_map<char,string>&keys, string path){
	if(root == NULL){
		return;
	}
    if(root->left == NULL && root->right == NULL){
    	keys[root->letter] = path;
    	return;
    }
    getCodes(root->left, keys, path+'0');
    getCodes(root->right, keys, path+'1');
}

int main(){
    string s;
    cout <<"Enter the text string: ";
    cin >>s;
    unordered_map<char,int>table;
    for(int i=0;i<s.size();i++){
    	table[s[i]]++;
    }
    priority_queue<Node*,vector<Node*>,Compare>pq;
    for(auto it: table){
    	Node* newNode = new Node(it.second, it.first);
        pq.push(newNode);
    }
    while(pq.size() > 1){
    	Node *n1 = pq.top();
    	pq.pop();
    	Node *n2 = pq.top();
    	pq.pop();
    	Node *n = new Node(n1->count + n2->count, '\0');
    	n->left = n1;
    	n->right = n2;
    	pq.push(n);
    }
    unordered_map<char,string>keys;
    Node* root = pq.top();
    string path;
    getCodes(root, keys, path);
    cout <<"The code table is: " <<endl;
    for(auto it: keys){
    	cout <<it.first <<" " <<it.second <<endl;
    }
    cout <<"The encoded message is: " <<endl;
    for(int i=0;i<s.size();i++){
    	cout <<keys[s[i]];
    }
    cout <<endl;
	return 0;
}
