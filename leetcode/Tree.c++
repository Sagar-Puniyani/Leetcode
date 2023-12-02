#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    Node* left ;
    Node* right;
    int data;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int func(Node* root ){

    /*Declaration of the Test Function  */

    // Base Case 
    if(root == NULL){
        return 0;
    }

    if(root->left == NULL && root->right == NULL){
        return 0;
    }

    // Return the height of the tree 
    return 1 + func(root->left) + func(root->right) ;

}

int main()
{
    Node* root = new Node(10);
    Node* n1 = new Node(20);
    Node* n2 = new Node(30);

    Node* n3 = new  Node(40);
    Node* n4 = new Node(50);
    Node* n5 = new Node(60);
    Node* n6 = new Node(60);

    root->left = n1;
    root->right = n2;

    n1->left = n3;
    n1->right = n4;
    n3->left = n5;
    n5->left = n6;


//  Calling the Function 

    int ans = func(root);
    cout<< "Answer is   "<< ans<< endl;

    return 0;
}