#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

bool areListsEqual(Node *head1, Node *head2)
{
    // Traverse both linked lists simultaneously
    while (head1 != NULL && head2 != NULL)
    {
        // If values at corresponding positions are not the same, return false
        if (head1->val != head2->val)
            return false;

        head1 = head1->next;
        head2 = head2->next;
    }

    // If both linked lists have been traversed completely, return true
    return head1 == NULL && head2 == NULL;
}

int main()
{
    // Input the values of the first singly linked list
    int value;
    cin >> value;
    Node *head1 = new Node(value);
    Node *current1 = head1;

    while (true)
    {
        cin >> value;
        if (value == -1)
            break;

        current1->next = new Node(value);
        current1 = current1->next;
    }

    // Input the values of the second singly linked list
    cin >> value;
    Node *head2 = new Node(value);
    Node *current2 = head2;

    while (true)
    {
        cin >> value;
        if (value == -1)
            break;

        current2->next = new Node(value);
        current2 = current2->next;
    }

    // Check if both linked lists are equal and output the result
    if (areListsEqual(head1, head2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    // Free memory by deleting both linked lists
    while (head1 != NULL)
    {
        Node *temp = head1;
        head1 = head1->next;
        delete temp;
    }

    while (head2 != NULL)
    {
        Node *temp = head2;
        head2 = head2->next;
        delete temp;
    }

    return 0;
}
