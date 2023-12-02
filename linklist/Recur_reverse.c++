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

Node *recur_reverse(Node *head)
{
    // Base Case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // general case
    Node *newhead = recur_reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
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
    head = recur_reverse(head);
    print(head);

    return 0;
}