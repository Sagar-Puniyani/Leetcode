#include <bits/stdc++.h>
using namespace std;


// simplest Apporach of stack 
class Mystack {
private:
    int size ;
    int  topInedx;
    int* stack;


public:
/*constructor */
    Mystack(int size){
        this->size = size;
        topInedx = -1;
        stack = new int[size];
    }

/*Destructor */
    ~Mystack(){
        delete[] stack;
    }

    void push(int x) {
        if(topInedx < size-1){
            stack[++topInedx] = x;
        }
        else{
            cerr << " CanNot Push Element in the Stack OverFlow " << endl;
        }
    }
    
    int pop() {
        if(!empty()){
            return stack[topInedx--];
        }
        else{
            cerr << "Cannot pop the element " << endl;
        }
    }
    
    int top() {
        if(!empty()){
            return stack[topInedx];
        }
        else{
            cerr << " Cannot find the top element " << endl;
        }
    }
    
    bool empty() {
        return topInedx == -1;
    }

};


int main()
{
    Mystack stack(5);
    stack.push(10);
    stack.push(20);
    cout << "Top element of the stack " << stack.top() << endl;
    cout << " Is the Stack is Empty " << stack.empty() << endl;
    return 0;
}
