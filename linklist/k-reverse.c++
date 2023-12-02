#include <bits/stdc++.h>
using namespace std;

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

bool has_nodes(Node *head, int k)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return false;
    }

    while (k)
    {
        if (temp != NULL)
        {
            temp = temp -> next;
            k--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

Node *k_reverse(Node *head, int k)
{

    // Trivial case
    if (head == NULL)
    {
        return NULL;
    }

    // Reversing the first K-group of nodes
    Node *curr = head;
    Node *forw = NULL;
    Node *prev = NULL;
    int cnt = 0;

    if (has_nodes(curr, k))
    {
        while (cnt < k && curr != NULL)
        {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
            cnt++;
        }

        head->next = k_reverse(curr, k);
    }

    else
    {
        return curr;
    }

    return prev;
}
int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    print(a);
    bool t = has_nodes(d, 3);
    cout << " Node of the d is : " << t << endl;

    int i = 3;

    Node *k = k_reverse(a, 3);
    print(k);
    while (i)
    {
        cout << " I am indian " << endl;
        --i;
    }

    return 0;
}