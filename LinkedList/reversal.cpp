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
    ListNode* reverseList(ListNode* head) {
        ListNode *next;
        ListNode *curr =head;
        ListNode *prev=nullptr;
        while (curr!=nullptr) {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};
// Time Complexity: O(n), where n is the number of nodes in the linked list.
// Space Complexity: O(1), as we are using only a constant amount of extra space    