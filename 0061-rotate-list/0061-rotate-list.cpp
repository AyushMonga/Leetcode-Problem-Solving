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
    int length(ListNode* head){
        if(head==NULL){
            return 0;
        }
        if(head->next==NULL){
            return 1;
        }
        int l=0;
        while(head!=nullptr){
            l++;
            head=head->next;
        }
        return l;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int l=length(head);
        k=k%l;
        for(int i=0;i<k;i++){
            ListNode* first=head;
            ListNode* prev=nullptr;
            while(head->next->next!=nullptr){
                head=head->next;
            }
            prev=head->next;
            head->next=nullptr;
            prev->next=first;
            head=prev;
        }
        return head;
    }
};