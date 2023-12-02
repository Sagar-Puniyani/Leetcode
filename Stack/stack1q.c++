/*Implementation of the stack by the help of 1 queue  */

#include <bits/stdc++.h>
using namespace std;

class Mystack
{
private:
    queue<int> q;

public:
    void push(int x) {
        int size = q.size();
        q.push(x);
        while(size--){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int t = q.front();
        q.pop();
        return t;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};




int main()
{
    Mystack st;

    st.push(10);
    st.push(15);
    st.push(20);

    cout << " Top of stack " << st.top() << endl;

    st.pop();
    st.pop();
    st.pop();
    cout << " Top of stack " << st.top() << endl;
    cout << " Is stack  empty " << st.empty() << endl;


    return 0;
}