#include <bits/stdc++.h>
using namespace std;


/* 
    Splitting the Circular LInked List INTO 
    Two Equal Halves 
*/

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        (*this).data = data;
        (*this).next = NULL;
    }

};


void print(Node* head){

        auto temp = head;
        cout << temp->data ;
        temp = temp->next;
        while(temp!= head){
            cout << "  "<< temp->data ;
            temp = temp->next;
    }
    cout<<endl;
}

pair <Node* , Node*> SplitCircularLL( Node* head  ){

    //  Initiating two Pointers Fast and Slow 
    auto fast = head->next;
    auto slow = head;

    // starting the Fast and slow Pointer from the head 

    while(fast->next != head){
        cout<< " Enter " << endl;
        slow = slow->next;

        // Data at Slow
        cout << " slow->data " << slow->data << endl;

        fast = fast->next;
        if(fast->next != head ){
        fast = fast->next;


        // Data at Fast
        cout << " fast->data " << fast->data << endl;
        }


        cout<< "EXit " << endl;
    }

    cout << " slow  = " << slow->data << endl;
    cout << " fast  = " << fast->data << endl;


    /* NOW the location of the slow and fast pointer is corrected 
    After  That We will try to make the Algo for  the 
    spliting the Single LInk list into two halves of the link list 
    */

    /* The start Pointer is Created  to make the head2 of the right
    circular link list 
    */

    Node* start = slow->next;
    fast->next = start;
    slow->next = head;
    
    pair <Node* , Node*  > pair1 ;
    pair1.first = head;
    pair1.second = start;

    return pair1;

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
    b->next = a;
    c->next = NULL;
    d->next = NULL;
    e->next = NULL;
    f->next = NULL;
    g->next = NULL;
    h->next = NULL;


    //Traversing of the Circular linklist 
    print(a);

    pair <Node* , Node* > p;


    p = SplitCircularLL(a);

    // Printing the splited linked list 


    /* there Should  be the Test Case of the 
        Circular link list with the 
        having Two Nodes 
    */

    cout << "First Linked LIst " <<endl;
    print(p.first);
    cout << "second  Linked LIst " <<endl;
    print(p.second);
    
    return 0;
}