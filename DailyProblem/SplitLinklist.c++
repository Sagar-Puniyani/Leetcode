
#include <bits/stdc++.h>
using namespace std;
/*725. Split Linked List in Parts
*/

/*Example 1:


Input: head = [1,2,3], k = 5
Output: [[1],[2],[3],[],[]]
Explanation:
The first element output[0] has output[0].val = 1, output[0].next = null.
The last element output[4] is null, but its string representation as a ListNode is [].
Example 2:


Input: head = [1,2,3,4,5,6,7,8,9,10], k = 3
Output: [[1,2,3,4],[5,6,7],[8,9,10]]
Explanation:
The input has been split into consecutive parts with size difference at most 1, and earlier parts are a larger size than the later parts.


Constraints:

The number of nodes in the list is in the range [0, 1000].
0 <= Node.val <= 1000
1 <= k <= 50
*/

struct ListNode {
    int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
};

vector<ListNode*> splitListToParts(ListNode* head, int k) {


    vector <LintNode*>parts(k,nullptr);
    // Finding the Length of linklist 
    for (ListNode* node = head ; node; node = node->next ) len++;

    // part size of the linked list 
    int n = len/k ;
    // extra node of the link list 
    int r = len % k;

    // arranging the parts of linklist 
        
}

int main()
{
    
    return 0;
}