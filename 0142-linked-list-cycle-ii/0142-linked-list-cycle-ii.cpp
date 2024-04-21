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
        
//         Slow-Fast Pointer Flloyd's Hare and tortoise algorithm
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* rememberHead = head;
        
        if(head == NULL || head->next == NULL) return NULL;
//         If there is NULL in the next of the head that means no cycle found
        
        while(fast != NULL && fast->next != NULL){
            // cout << fast << " Pointer " << endl;
            slow = slow->next;
            fast = fast->next->next;
            
//             There will be a point in the cycle where fast & slow would meet each other
            if(fast == slow && (fast->next == slow->next)) break;
            
        }
//         This means there is no cycle whatsoever
        if (fast == NULL || fast->next == NULL) return NULL;
        
//         Here the above algo comes into picture where you're saving on O(n) of space[when using set/ hashmap/ array] & making the solution optimised)
        
        // cout << rememberHead->val << " : " << rememberHead->next << " --- " << slow->val << " : " << slow->next << endl;
        while(rememberHead != slow){
            cout << rememberHead->next << " - " << slow->next << endl;
            rememberHead = rememberHead->next;
            slow = slow->next;
        }
        return slow;
        
        
// //         Brute Force - T.C. - O(n) , S.C. - O(n)
//         unordered_set <ListNode*> st;
// //         Create a set & store unique addresses of the node in the linked list & when the same node comes twice while iterating that means  there is a cycle in the linked list --- Same node came twice this can be found by checking the count of the Node in the linked list, if the count == 1 that means there is a cycle, break the loop there and return the pointing node of the linked list also called the head.
//         while(head != NULL && head->next != NULL && !st.count(head)) {
//             st.insert(head);
//             head = head->next; 
//         }
//         for(auto & val :  st) {
//             cout << val << " - val" << endl;
//             cout << val->val  << " )))" << endl;
//         }
        
//         if(head == NULL || head->next == NULL) return NULL;
// //         If there is NULL in the next of the head that means no cycle found
        
//         return head;
    }
};