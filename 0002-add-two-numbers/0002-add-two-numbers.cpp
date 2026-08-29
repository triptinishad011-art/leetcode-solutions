class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        // Dummy node to start the result list
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            
            int sum = carry;

            // Add first list value
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            // Add second list value
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Store digit
            curr->next = new ListNode(sum % 10);
            curr = curr->next;

            // Calculate carry
            carry = sum / 10;
        }

        return dummy->next;
    }
};