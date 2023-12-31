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

int findDifference(Node *head)
{
    if (head == NULL)
        return 0;

    int minValue = INT_MAX;
    int maxValue = INT_MIN;

        while (head != NULL)
    {
        minValue = min(minValue, head->val);
        maxValue = max(maxValue, head->val);
        head = head->next;
    }

    int difference = maxValue - minValue;

    return difference;
}

int main()
{
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

    int result = findDifference(head);
    cout << result << endl;

    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
