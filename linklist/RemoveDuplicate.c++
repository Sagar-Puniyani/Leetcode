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

/*Given the head of a sorted linked list,
delete all duplicates such that each element appears only once.
Return the linked list sorted as well.*/

Node *deleteDuplicates(Node* head){

    // Base Case 
    if(head == NULL){
        return NULL ;
    }

    auto curr = head;

    // Genearal Case 
    while(curr->next != NULL){
        cout<< "Enter "<< endl;
        

        if((curr->data == curr->next->data) && (curr->next != NULL)){
            cout << "Data   Same "; 
            cout << "curr->data = " << curr->data<<endl;
            Node*  NodeToDelete = curr->next;
            Node* CurrToLocate = curr->next->next;

            delete (NodeToDelete);
            curr->next = CurrToLocate;
            print(head);
        }


        //  In the Case of data is Equal Then , 
        else  {
            cout << "Data NOT  Same "; 
            cout << "curr->data = " << curr->data<<endl;
            curr = curr->next;

        }
        cout<< "Exit " <<endl;
    }

        cout << "Time to Return "<< endl;

        return  head;
}

int main()
{

    Node *a = new Node(1);
    Node *b = new Node(1);
    Node *c = new Node(2);
    Node *d = new Node(2);
    Node *e = new Node(2);
    Node *f = new Node(5);
    Node *g = new Node(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = NULL;


    // Printing the linked list 
    print(a);

    // Calling the Duplicate Remover Function 
    cout << "Fn is CAlling" << endl;
    Node* n  = deleteDuplicates(a);

    // cout<< "After the Removal of the Duplicates "<<endl;
    print(n);

    return 0;
}