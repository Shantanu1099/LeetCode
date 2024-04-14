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
    ListNode* middleNode(ListNode* head) {
//         Slow Fast Pointer approach
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
//         Currently the slow is pointing at the middle node of the linked list, it will consider it as the HEAD & will have all the nodes connected to it in the memory i.e. will return all the nodes till any node has NULL in the next pointer.
        return slow;
        // Time Complexity - O(n)
    }
};