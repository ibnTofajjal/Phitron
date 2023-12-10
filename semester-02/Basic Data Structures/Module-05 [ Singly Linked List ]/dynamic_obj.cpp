#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

int main () {

    Node* head = new Node(10); // head is a pointer to a Node object [Head holding the address of the Node object]
    Node* a = new Node(20); // a is a pointer to a Node object [a holding the address of the Node object]

    // Now We've to linked up the two nodes (head and a)
    head->next =a;

    cout<<head->val<<endl;
    cout<<head->next->val<<endl;
    cout<<a->val<<endl;

    return 0;
}