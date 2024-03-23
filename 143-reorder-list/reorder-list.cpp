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
    void reorderList(ListNode* head) {
          vector<ListNode*> v;
        while (head != NULL) v.push_back(head), head = head->next;
        int n = v.size();
        if (n <= 2) return;
        for (int i = 0; 2*i< n; ++i) {
            v[i]->next = v[n-i-1];
            v[n-i-1]->next = v[i+1]; 
        }
        v[n/2]->next = NULL;
    }
};