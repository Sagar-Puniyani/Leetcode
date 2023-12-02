#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

// To Traverse the linklist
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << endl;
}

// reversing the linklist iterativly

Node *reverselinklist(Node *&head)
{
    Node *curr = head;

    // In case of the empty and single element linklist
    if (curr == NULL || curr->next == NULL)
    {
        return curr;
    }
    Node *prev = NULL;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

int main()
{
    // initalising the link list
    Node *head = new Node(3);
    Node *a = head;
    Node *b = new Node(5);
    Node *c = new Node(7);
    Node *d = new Node(9);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    print(head);
    head = reverselinklist(head);
    print(head);

    return 0;
}