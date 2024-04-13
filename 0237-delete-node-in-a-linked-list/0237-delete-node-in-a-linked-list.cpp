/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* prev = NULL;
        
        while(node != NULL && node->next != NULL) {
            node->val = node->next->val;
            
//             Assign the current node as Prev to track it
            prev = node;
            node = node->next;
        }
        prev->next = NULL;
//         This will be the last node that is disconnected from the chain bcoz we are assigning the prev->next pointer to NULL
        delete(node);
    }
};