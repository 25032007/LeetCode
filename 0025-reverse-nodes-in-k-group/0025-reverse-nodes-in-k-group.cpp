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
    ListNode* reverse(ListNode* head){
        if(head == nullptr || head->next == nullptr) return head;

        ListNode* lastNode = reverse(head->next);

        head->next->next = head;
        head->next = nullptr;

        return lastNode;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        if(head == nullptr || head->next == nullptr) return head;

        ListNode* t1 = head;

        for(int i=0; i<k-1; i++){
            t1 = t1->next;
            if(t1 == nullptr) return head;
        }

        ListNode* t2 = t1->next;
        t1->next = nullptr; //break the chain
        ListNode* rev = reverse(head);

        head->next = reverseKGroup(t2, k);

        return rev;
    }
};