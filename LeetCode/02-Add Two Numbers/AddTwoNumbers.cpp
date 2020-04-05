

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0, res;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* prev;
        while(temp1 && temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        if(temp1 && !temp2){
            temp1 = l1;
            temp2 = l2;
            prev = temp1;
            while(temp1){
                if(temp2){
                    res = temp1->val + temp2->val + carry;
                    temp1->val = res>10 ? res%10: res;
                    carry = res>10 ? 1 : 0;
                    prev = temp1;
                    temp1 = temp1->next;
                    temp2 = temp2->next;
                }
                else{
                    temp1->val = temp1->val + carry;
                    carry = 0;
                    prev = temp1;
                    temp1 = temp1->next;
                }
                
            }
            if(carry==1){
                ListNode(1);
            }
            return l1;
        }
        else{
            temp1 = l1;
            temp2 = l2;
            while(temp2){
                if(temp1){
                    res = temp1->val + temp2->val + carry;
                    temp2->val = res>10 ? res%10 : res;
                    carry = res>10 ? 1 : 0;
                    prev = temp2;
                    temp1 = temp1->next;
                    temp2 = temp2->next;
                }
                else{
                    temp2->val = temp2->val + carry;
                    carry = 0;
                    prev = temp2;
                    temp2 = temp2->next;
                }
            }
            if(carry==1){
                ListNode(1);
            }
            return l2;
        }
        
    }
};
