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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> data;
        
        for(ListNode* head: lists){
            ListNode* temp = head;

            while(temp != nullptr){
                data.push_back(temp->val);
                temp = temp->next;
            }
        }

        sort(data.begin(), data.end());
        ListNode* head = new ListNode(-1);
        ListNode* traver = head;

        for(int i=0; i<data.size(); i++){
            traver->next = new ListNode(data[i]);
            traver = traver->next;
        }
        return head->next;
    }
};