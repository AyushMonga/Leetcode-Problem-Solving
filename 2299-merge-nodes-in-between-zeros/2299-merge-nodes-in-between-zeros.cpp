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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(); 
        ListNode* current = dummy;
        
        while (head && head->next) {
            if (head->val == 0) {
                head = head->next;
                int sum = 0;
                while (head && head->val != 0) {
                    sum += head->val;
                    head = head->next;
                }
                if (sum > 0) { 
                    current->next = new ListNode(sum);
                    current = current->next;
                }
            }
        }
        
        ListNode* result = dummy->next;
        return result;
    }
};