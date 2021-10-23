//STANDARD SOLUTION
#include <iostream>
#include <vector>
using namespace std;
 
// A Linked List Node
class Node
{
  public:
    int key;        // data field
    Node* next;     // pointer to the next node
};
 
/*
    push() in C++ — we just add `&` to the right-hand side of the head
    parameter type, and the compiler makes that parameter work by reference.
    So, this code changes the caller's memory, but no extra uses of `*` are
    necessary — we access "head" directly, and the compiler makes that
    change reference back to the caller.
*/
void push(Node* &headRef, int key)
{
    // allocate a new node in a heap and set its data
    Node* node = new Node;
    node->key = key;
 
    // set the `.next` pointer of the new node to point to the current
    // first node of the list.
 
    // no extra use of `*` necessary on the head — the compiler
    // takes care of it behind the scenes
    node->next = headRef;
 
    // change the head pointer to point to the new node, so it is
    // now the first node in the list.
    headRef = node;
}
 
// Function for linked list implementation from a given set of keys
Node* constructList(vector<int> const &keys)
{
    Node* head = nullptr;
 
    // start from the end of the array
    for (int i = keys.size() - 1; i >= 0; i--)
    {
        // Note that no extra use `&` necessary — the compiler takes
        // care of it here too. These calls are changing the head.
 
        push(head, keys[i]);
    }
 
    return head;
}
 
// Helper function to print a linked list
void printList(Node* head)
{
    Node* ptr = head;
    while (ptr)
    {
        cout << ptr->key << " -> ";
        ptr = ptr->next;
    }
 
    cout << "nullptr";
}
 
int main()
{
    // input keys (in reverse order)
    vector<int> keys = { 4, 3, 2, 1 };
 
    // construct linked list
    Node *head = constructList(keys);
 
    // print linked list
    printList(head);
 
    return 0;
}

