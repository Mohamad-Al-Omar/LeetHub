/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans,*temp;
        temp = ans = new ListNode();
        bool first = true;
        int a = 0,b = 0;
        while(l1 != NULL || l2 != NULL){
            int val=0;
            if (l1 != NULL){
                val += l1->val;
            }
            if(l2!=NULL){
                val+=l2->val;
            }
            
            val += b;
            a = val%10;
            b = val/10;
            //cout<<"a=> "<<a<<"  b=> "<<b<<endl;
            if (first){
                temp->val = a;
                first = false;
            }else{
                temp->next = new ListNode(a);
                temp = temp->next;
            }
            
            if (l1 != NULL)
                l1=l1->next;
            if (l2!= NULL)
                l2=l2->next;
        } 
        if (b){
            temp->next = new ListNode(b);
        }
        //printList(temp);
        //printList(ans);
        return ans;
    }
    void printList(ListNode *l1){
        while(l1 != NULL){
            cout<<l1->val<<endl;
            l1=l1->next;
        }
    }
};