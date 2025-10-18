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
    int pairSum(ListNode* head) {
        vector<int>arr;
        while(head!=nullptr){
            arr.push_back(head->val);
            head=head->next;
        }
        int l=0;
        int r=arr.size()-1;
        int maxi=INT_MIN;
        while(l<r){
            int sum=0;
            sum+=arr[l]+arr[r];
            l++;
            r--;
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};