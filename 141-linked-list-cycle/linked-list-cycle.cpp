/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
         map<ListNode*,int> hm;
        while(head!=NULL){
            hm[head]++;
            if(hm[head]==2)return 1;
            head=head->next;
        }
        return 0;
    }
};