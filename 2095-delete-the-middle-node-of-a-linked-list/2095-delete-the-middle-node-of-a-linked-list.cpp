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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL) return NULL;
        
        // edge case, 2 elements
        if (head->next->next == NULL) {
            head->next = NULL;
            return head;
        }
        
        ListNode* prev = NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL) {
            prev = slow;
            // cout << prev->val << " -- " << prev->next << endl;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = slow->next; // Here the pointer of prev is in the middle after pointing to the next element after the middle element
        
        // cout << prev->val << " -1- " << prev->next << endl;
        // cout << slow->val << " -2- " << slow->next << " 0 " << slow->next->val << " 6 " << slow->next->next << endl;
        delete(slow);
        
        prev = head; // Point prev to the first pointer in the head
        
        return prev;
    }
};