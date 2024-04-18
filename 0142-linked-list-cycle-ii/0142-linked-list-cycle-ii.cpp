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
    ListNode *detectCycle(ListNode *head) {
        
        unordered_set <ListNode*> st;
        while(head != NULL && head->next != NULL && !st.count(head)) {
            st.insert(head);
            head = head->next; 
        }
        
        if(head == NULL || head->next == NULL) return NULL;
        
        return head;
    }
};