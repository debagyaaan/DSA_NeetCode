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
    bool hasCycle(ListNode* head) {
        ListNode *slow =head;
        ListNode *fast =head;
        while (fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast = fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
// The above code defines a function to detect if a singly-linked list has a cycle using the Floyd's Tortoise and Hare algorithm.
// It uses two pointers, one moving at normal speed (slow) and the other moving at