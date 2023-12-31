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

int findIndex(Node *head, int X)
{
    int index = 0;

    // Traverse the linked list to find the index of X
    while (head != NULL)
    {
        if (head->val == X)
            return index;

        head = head->next;
        index++;
    }

    // If X is not found, return -1
    return -1;
}

int main()
{
    // Input the number of test cases
    int T;
    cin >> T;

    while (T--)
    {
        // Input the singly linked list values
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

        // Input the value of X
        int X;
        cin >> X;

        // Find and output the index of X in the linked list
        int result = findIndex(head, X);
        cout << result << endl;

        // Free memory by deleting the linked list
        while (head != NULL)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    return 0;
}
