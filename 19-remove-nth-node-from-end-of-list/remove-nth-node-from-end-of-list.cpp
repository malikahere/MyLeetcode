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
    int len=0;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if(head==NULL)return NULL;
        head->next=removeNthFromEnd(head->next,n);
        len++;
        if(n==len){
            return head->next;
        }
        return head;
    }
};