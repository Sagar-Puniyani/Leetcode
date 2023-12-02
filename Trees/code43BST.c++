#include <bits/stdc++.h>
using namespace std;

//No duplicates is allowed in BST
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


node* InsertintoBST(node* &root,int key){

    node* head = root;
    node* new_node = new node(key);
//  base case intiallising the new node
    if(head == NULL){
        head = new_node;
        return head;
    }


//  genral case 
    else if(head->data < new_node->data){
        head->right = InsertintoBST(head->right,key);
    }
    else if(head->data > new_node->data){
        head->left = InsertintoBST(head->left, key);
    }
}

void Inorder(node* root){
    //base case
    if(root == NULL)
    return;

    Inorder(root->left);
    cout<<"  "<<root->data;
    Inorder(root->right);
}


int main()
{   

    node* root = new node(20);
    node* l = new node(10);
    node* r = new node(30);

    root->left = l;
    root->right = r;

    Inorder(root);
    InsertintoBST(root,15);
    InsertintoBST(root,40);
    InsertintoBST(root,50);
    InsertintoBST(root,95);

    cout<<endl<<"After Insertion"<<endl;
    Inorder(root);
    
    return 0;
}