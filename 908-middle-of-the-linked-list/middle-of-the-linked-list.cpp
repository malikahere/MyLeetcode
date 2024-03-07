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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL or head->next == NULL){
            return head;
        }
        ListNode *a = head , *b = head;
        while(b and b->next){
            a = a->next;
            b = b->next->next ;
        }
        return a;
    }
};