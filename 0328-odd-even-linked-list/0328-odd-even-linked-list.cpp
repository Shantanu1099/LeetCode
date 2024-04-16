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
    ListNode* oddEvenList(ListNode* head) {
//         Major corner case, don't forget the corner cases mannnn
        if(head == NULL || head-> next == NULL) return head;
        
        ListNode* odd = head;
        ListNode* storeFirstEven = head->next;
        ListNode* even = head->next;
        
        while(even != NULL && even->next != NULL) {
            odd->next = even->next;
            even->next = odd->next->next; 
//             Also odd->next->next is equivalent to the even->next->next see line number 20 & 21.
            //This code here might break & give NULL as even might go out of the Link, that will terminate the while loop in the next iteration
            even = even->next;
            odd = odd->next;
        }
        
        odd->next = storeFirstEven;
//         Point the last node of odd to the first node of even that is already store initially in the storeFirsteven
        
//      Return head that has the pointer to the first node of the linked list   
        return head;
    }
};