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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st;
        for(auto x:nums)
        st.insert(x);

        //if element is in start
        while(head&&st.find(head->val)!=st.end()){
            head=head->next;
        }
        if(head==nullptr||!head->next) return head;
        ListNode*curr=head->next;
        ListNode*prev=head;
        while(curr){
            if(st.find(curr->val)!=st.end()){
                prev->next=curr->next;
                curr=curr->next;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};
