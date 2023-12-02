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

 /*There is the Partitioning Function */


Node* partition(Node* head, int x) {

    cout <<" Fn is Called "<< endl;

    // Base Case 
    if(head == NULL || head->next == NULL){
        return NULL;
    }


    // General Case 
    auto temp = new Node(-1);
    auto curr = temp;


    temp->next = head;
    // cout << " current data = " <<  curr->data << endl;
    // cout << " current next = " <<  curr->next << endl;

    /*Having the New linklist to make sure that the removed element make place */

    auto newhead = new Node(-5);
    auto tail = newhead;


    while (curr->next != NULL)
    {

        cout << "Enter "<< endl;
        if(curr->next->data < x){
            curr = curr->next;
        }
        

        else {
            auto ReplaceNode = curr->next;
            curr->next = ReplaceNode->next;
            cout << " Replacing Node  = " << ReplaceNode->data<< endl;

            // Make seprated of the replced Node from the list 
            ReplaceNode->next = NULL;


            /* To Relocating to the Other Node*/
            tail->next = ReplaceNode;
            tail = tail->next;
        }

        cout << "Exit "<< endl;
    }
    
    /* Rejoining of Both Linked List */

    curr->next = newhead->next;

    /*Returning the Joined linked list */

    cout << "Fn is Ended "<< endl;

    return temp->next;


}

int main()
{

    Node *a = new Node(1);
    Node *b = new Node(4);
    Node *c = new Node(3);
    Node *d = new Node(2);
    Node *e = new Node(5);
    Node *f = new Node(2);
    Node *g = new Node(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = NULL;

    // Printing of the Linked List 
    print(a);


    /* Calling the Partition function */

    auto res = partition(a , 3);
    cout<< " After Calling the function " << endl;
    print(res);



    
    return 0;
}