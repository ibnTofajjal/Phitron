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

void remove_duplicates(Node *head)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *runner = current;

        // Traverse the linked list to remove nodes with the same value as the current node
        while (runner->next != NULL)
        {
            if (runner->next->val == current->val)
            {
                Node *temp = runner->next;
                runner->next = runner->next->next;
                delete temp;
            }
            else
            {
                runner = runner->next;
            }
        }

        current = current->next;
    }
}

void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Input the values of the singly linked list
    int value;
    cin >> value;
    Node *head = new Node(value);
    Node *current = head;

    while (true)
    {
        cin >> value;
        if (value == -1)
            break;

        current->next = new Node(value);
        current = current->next;
    }

    // Remove duplicates from the linked list
    remove_duplicates(head);

    // Print the final linked list
    print_linked_list(head);

    // Free memory by deleting the linked list
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
