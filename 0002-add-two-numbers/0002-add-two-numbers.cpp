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
private:
    int getsize(ListNode* head){
        int len = 0;
        while(head != nullptr){
            len++;
            head = head->next;
        }
        return len;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int len1 = getsize(l1);
        int len2 = getsize(l2);

        if(len1 < len2){
            swap(l1, l2);
        }
        ListNode* head = l1;
        ListNode* prev = nullptr;
        int carry = 0;

        while(l1 != nullptr){
            int sum = carry + l1->val + (l2 != nullptr ? l2->val : 0);
            carry = sum / 10;
            l1->val = sum % 10;

            prev = l1;
            l1 = l1->next;
            if(l2 != nullptr){
                l2 = l2->next;
            }
        }

        if(carry > 0){
            prev->next = new ListNode(carry);
        }

        return head;
    }
};