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
    ListNode* removeZeroSumSublists(ListNode* head) {
          ListNode* dummy=new ListNode(0);
        dummy->next=head;
        unordered_map<int,ListNode*>mp;
        mp[0]=dummy;
        int sum=0;
        while(head!=NULL)
        {

            sum=sum+head->val;
            if(mp.find(sum)!=mp.end()){
                ListNode* prev=mp[sum];
                ListNode*temp=prev;
                int psum=sum;

                while(temp!=head){
                    temp=temp->next;
                    psum=psum+temp->val;
                    if(temp!=head){
                        mp.erase(psum);
                    }

                }

                prev->next=head->next;
                
            }
            else{
                mp[sum]=head;
            }
            head=head->next;
            

        }
        return dummy->next;
        
    }
};