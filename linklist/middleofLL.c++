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

int getlength(Node* head){
    int len = 0;

    while(head != NULL){
        len++;
        head = head->next;
    }
    return len;
}

Node* middlenode(Node* head){
    int len = getlength(head);
    int mid = len/2 +1 ;
    Node* midptr = head;

    while(mid-1){
        midptr = midptr->next;
        mid--;
    }
    return midptr;
}


Node* findmid(Node* head){
    Node* fast = head;
    Node* slow = head;

    if(fast == NULL || fast->next == NULL){
        return fast;
    }

    while(fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
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
    
    return 0;
}