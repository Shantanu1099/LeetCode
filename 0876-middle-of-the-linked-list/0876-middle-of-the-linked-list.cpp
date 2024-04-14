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
//         Brute Force approach
        ListNode* headCopy = head;
        int count = 1;
//         Count the nodes in the linkedlist/ size of linkedList
        while(headCopy != NULL && headCopy->next != NULL) {
            count++;
            headCopy = headCopy->next;
        }
//         Assign headCopy to the head of the linked List i.e. the first node of the list
        headCopy = head;
        count /= 2;
        while(count) {
            count--;
            head = head->next;
        }
        headCopy = head;
        cout << count << " -  count" << endl;
        
        
//         Slow Fast Pointer approach / Stylish approach
        return headCopy;
    }
};