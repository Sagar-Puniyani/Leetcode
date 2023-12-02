#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

void print(Node *head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
/*
This the problem of the Removing the ALL the Duplicate Node 
of the Linked list 
*/


Node* deleteDuplicates(Node* head) {
    cout<< "Fn is Calling .... "<< endl;

    // Base Case 
    if(head == NULL || head->next == NULL){
        return head;
    }
    int TerminatingValue;

    Node* temp = new Node(-1);
    temp->next = head;

    auto prev = temp;
    auto current = prev->next;
    auto forw = current->next;

    cout<< "prev = "<< prev->data<<endl;
    cout<< "current = "<< current->data<<endl;
    cout<< "forw = "<< forw->data<<endl;



    cout<< "Before Loop "<<endl;

    while(current->next != NULL ){
        cout<< "Enter "<<endl;
        if(current->data == forw->data ){
            cout << " Same Data = "<< current->data<<endl; 
            TerminatingValue = current->data;
        }

        if(TerminatingValue == current->data){
            auto NodeToDelete = current;
            cout << "Node to Delete  = "<< NodeToDelete->data<<endl;
            prev->next = forw;
            current = forw;

            delete(NodeToDelete);
            forw = current->next;
        }

    else {

        prev = current;
        current = forw;
        forw = forw->next;
        cout<< "Exit "<<endl;
    }
    }

    if(current->data == TerminatingValue){
        auto NodeTodelete = current ;
        prev->next = NULL;

        delete (NodeTodelete);
    }

    /*Adding the temp Node in Starting of the LINKed LIst 
    To make The Problem Easiler */

    return temp->next;

    cout << " Ending of Fn...."<< endl;
}


int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(3);
    Node *e = new Node(4);
    Node *f = new Node(4);
    Node *g = new Node(5);


    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = new Node(6);
    g->next->next = new Node(8);
    g->next->next->next = new Node(8);
    g->next->next->next->next = new Node(8);
    g->next->next->next->next->next = new Node(8);
    g->next->next->next->next->next->next = new Node(9);
    g->next->next->next->next->next->next->next = new Node(10);
    g->next->next->next->next->next->next->next->next = new Node(10);
    g->next->next->next->next->next->next->next->next->next = new Node(11);
    g->next->next->next->next->next->next->next->next->next->next = new Node(12);
    g->next->next->next->next->next->next->next->next->next->next->next = new Node(12);
    g->next->next->next->next->next->next->next->next->next->next->next->next = new Node(18);
    g->next->next->next->next->next->next->next->next->next->next->next->next->next = new Node(18);
    g->next->next->next->next->next->next->next->next->next->next->next->next->next->next = new Node(18);
    g->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next = new Node(20);

    // Print the Link list 
    cout << "Printing " << endl;
    print(a);

    // Calling the Function 
    Node* r = deleteDuplicates(a);

    cout<<"After Algo " << endl;
    print(r);

    
    return 0;
}
