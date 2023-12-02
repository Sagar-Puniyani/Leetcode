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

// REVERSE BETWEEN

Node* reversebetween(Node* head , int left , int right){

    //Base Case 
    if(!head || left >= right ) return head; 

    Node* dummy = new Node(0);
    dummy->next = head;
    Node* bptr = dummy;

    int pos = 1;
    while(pos < left ){
        bptr = bptr->next;
        pos++;
    }

    auto wptr = bptr->next;
    while(right - left ){
        auto eptr = wptr->next;
        wptr->next = eptr->next;
        eptr->next = bptr->next;
        bptr->next = eptr;
        left++;
    }

    return dummy->next;

    
}

int main()
{

    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    print(a);
    Node* t = reversebetween(a,2,4);
    print(t);

    return 0;
}