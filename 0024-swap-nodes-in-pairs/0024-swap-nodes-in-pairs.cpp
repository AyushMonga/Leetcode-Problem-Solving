class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) {
            return head;  // If 0 or 1 node, return as is.
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        while (head && head->next) {
            ListNode* first = head;
            ListNode* second = head->next;

            // Swapping nodes
            prev->next = second;
            first->next = second->next;
            second->next = first;

            // Move pointers forward
            prev = first;
            head = first->next;
        }

        return dummy->next;
    }
};
