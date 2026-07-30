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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1 = l1;
        ListNode* head2 = l2;

        vector<int> arr1;
        vector<int> arr2;

        while(head1 != nullptr){
            arr1.push_back(head1->val);
            head1 = head1->next;
        }
        while(head2 != nullptr){
            arr2.push_back(head2->val);
            head2 = head2->next;
        }

        reverse(arr1.begin(), arr1.end());
        reverse(arr2.begin(), arr2.end());

        int i= arr1.size()-1, j = arr2.size()-1;

        int sum = 0, carry = 0;
        vector<int> ans;

        while(i >= 0 && j >= 0){
            sum = arr1[i] + arr2[j] + carry;
            carry = sum / 10;
            ans.push_back(sum % 10);
            i--;
            j--;
        }

        while(i >= 0){
            sum = arr1[i] + carry;
            carry = sum / 10;
            ans.push_back(sum % 10);
            i--;
        }

        while(j >= 0){
            sum = arr2[j] + carry;
            carry = sum / 10;
            ans.push_back(sum % 10);
            j--;
        }

        if(carry != 0){
            ans.push_back(carry);
        }

        // reverse(ans.begin(), ans.end());

        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        for(int i=0; i<ans.size(); i++){
            temp->next = new ListNode(ans[i]);
            temp = temp->next;
        }
        return dummy->next;
    }
};