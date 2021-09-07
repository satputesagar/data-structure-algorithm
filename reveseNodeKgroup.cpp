#include <iostream>
using namespace std;
 
// A Linked List Node
struct Node
{
    int data;
    Node* next;
 
    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
 
// Helper function to allocate the new node in a heap and
// insert it at the beginning of the linked list
void push(Node* &headRef, int data)
{
    Node* node = new Node(data);
    node->next = headRef;
    headRef = node;
}
 
// Helper function to print a given linked list
void printList(string msg, Node* head)
{
    cout << msg << ": ";
    while (head)
    {
        cout << head->data << " —> ";
        head = head->next;
    }
 
    cout << "null" << endl;
}
 
// Function to reverse first `k` nodes in a linked list.
// Note that the linked list pointer is passed by reference.
// The function returns the new front node (or last node in the original sublist)
Node* reverse(Node*& curr, int k)
{
    // maintain a `prev` pointer
    Node* prev = nullptr;
 
    // traverse the list and reverse first `k` nodes
    while (curr && k--)
    {
        // tricky: note the next node
        Node* next = curr->next;
 
        // fix the `curr` node
        curr->next = prev;
 
        // advance the two pointers
        prev = curr;
        curr = next;
    }
 
    // return node at the front
    return prev;
}
 
// Function to skip `k` nodes in a given linked list.
// Note that the linked list pointer is passed by reference.
Node* skipKNodes(Node*& curr, int k)
{
    Node* prev = nullptr;
 
    while (curr && k--)
    {
        prev = curr;
        curr = curr->next;
    }
 
    return prev;
}
 
// Recursive function to reverse every alternate group of `k` nodes
// in a linked list
Node* reverseAlternatingKNodes(Node* head, int k)
{
    Node* prev = nullptr;
    Node* curr = head;
 
    // traverse the whole list
    while (curr)
    {
        // curr would be the last node in the reversed sublist
        Node* lastNode = curr;
 
        // reverse next `k` nodes and get their head
        Node* frontNode = reverse(curr, k);
 
        // update head pointer after first `reverse()` call
        if (!prev) {
            head = frontNode;
        }
        // for subsequent calls to `reverse()`, link the reversed sublist
        // with the rest of the list
        else {
            prev->next = frontNode;
        }
 
        // link the last node with the current node
        lastNode->next = curr;
 
        // skip next `k` nodes
        prev = skipKNodes(curr, k);
    }
 
    // return head node
    return head;
}
 
int main()
{
    // construct a singly linked list
    Node* head = nullptr;
 
    // construct a singly linked list
    int n = 10;
    while (n) {
        push(head, n--);
    }
 
    int k = 2;
 
    printList("Original linked list ", head);
    head = reverseAlternatingKNodes(head, k);
    printList("Resultant linked list", head);
 
    return 0;
}