#include <bits/stdc++.h>
using namespace std;

class Mystack{

private:
    queue <int> q1;
    queue <int> q2;

public:
    void push(int x) {
        int size = q2.size();
        q1.push(x);

        while (size--){
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1 , q2);

    }
    
    int pop() {
        int res = q2.front();
        q2.pop();
        return res;
    }
    
    int top() {
        return q2.front();
    }
    
    bool empty() {
        return q2.empty();
    }

};

int main()
{
    Mystack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << " Top of the Stack " << st.top() << endl;
    st.pop();    
    cout << " Top of the Stack " << st.top() << endl;
    return 0;
}