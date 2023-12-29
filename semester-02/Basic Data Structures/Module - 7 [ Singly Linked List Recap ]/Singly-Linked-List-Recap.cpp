#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val) // Constructor
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{
    Node *temp = head; // initally temp position in head

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next; // Secondly the temp position in the next of head, and so on.
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head); // Just pass the head to the function paramiter, bcz if we have only head then we can print all other node next of head node.
    return 0;
}

/*

    Step 1: Create a Node Class with Constructor.
    Step 2: Create Dynamic Node Objects to the main Function
    Step 3: Link all the object to each others with the help of next
    Step 4: Create a Function for Printing all the List: the function will take [ head->Node ] as a paramiter
    Step 5: write a Node variable to store 'head' in a temp var . Then run a while loop until temp != NULL.

*/