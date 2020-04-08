
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* half = head;
        int count =0;
        while(head){
            head=head->next;
            count+=1;
            if(count%2==0)
                half = half->next;
        }
        if(count%2==0)
            return half;
        else
            return half;
    }
};