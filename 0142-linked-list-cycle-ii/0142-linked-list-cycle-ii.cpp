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
        
//         Brute Force - T.C. - O(n) , S.C. - O(n)
        unordered_set <ListNode*> st;
//         Create a set & store unique addresses of the node in the linked list & when the same node comes twice while iterating that means  there is a cycle in the linked list --- Same node came twice this can be found by checking the count of the Node in the linked list, if the count == 1 that means there is a cycle, break the loop there and return the pointing node of the linked list also called the head.
        while(head != NULL && head->next != NULL && !st.count(head)) {
            st.insert(head);
            head = head->next; 
        }
        for(auto & val :  st) {
            cout << val << " - val" << endl;
            cout << val->val  << " )))" << endl;
        }
        
        if(head == NULL || head->next == NULL) return NULL;
//         If there is NULL in the next of the head that means no cycle found
        
        return head;
    }
};