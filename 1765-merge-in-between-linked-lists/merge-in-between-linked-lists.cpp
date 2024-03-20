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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
         ListNode* temp,*prev,*curr,*temp1;
        temp=list1;
        temp1=list2;
        int count=0;
        while(count!=a){
            prev=temp;
            temp=temp->next;
            count++;
        }
        while(count<=b){
            curr=temp;
            temp=temp->next;
            count++;
        }
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        prev->next=list2;
        temp1->next=temp;
        return list1;
    }
};