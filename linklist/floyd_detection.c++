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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << endl;
}

bool hascycle(Node *head)
{

    // critical case 
    if (head == NULL  || head->next == NULL){
        return false ;
    }

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && slow != NULL ){
        fast = fast->next ;
        if(fast != NULL){
            fast = fast->next;
        }
        slow =  slow->next;

    if(fast == slow ){
        return true;
    }
    }

    
        return false;
}

// Another Approach
bool has_Cycle(Node *head)
{
    if (head == nullptr)
    {
        cout << "head->data" << head->data;
        return false;
    }
    if (head->next != nullptr)
    {
        if (head->next->data == 1e5 + 1)
        {
            return true;
        }
        else
        {
            head->next->data = 1e5 + 1;
            return has_Cycle(head->next);
        }
    }
    else
    {
        return false;
    }
}

bool y()
{
    if (NULL == NULL)
    {
        return true;
    }

    return false;
}

int main()
{

    // initalising the link list
    Node *a = new Node(3);
    Node *b = new Node(5);
    Node *c = new Node(7);
    Node *d = new Node(8);
    Node *e = new Node(9);
    Node *f = new Node(10);
    Node *g = new Node(12);
    Node *h = new Node(15);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = c;

    // cout << " a->data = " << a->data;

    // bool tell = y();
    // cout << " yes = " << tell << endl;

    bool t = hascycle(a);
    cout << " Is  Linked List has Cycle  : " << t << endl;
    bool w = has_Cycle(a);
    cout << " Is  Linked List has Cycle  : " << w << endl;

    return 0;
}