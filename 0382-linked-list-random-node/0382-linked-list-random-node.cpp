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
    vector <int> v;
    Solution(ListNode* head) {
        while(head != NULL) {
            v.push_back(head->val);
            head = head->next;
        }
    }
    
    int getRandom() {
        int size = v.size();
        // cout << size << " : size" << endl;
        
        int randIndex = rand() % size;
//         When we moduklo any number by x, the result would always be less than x or 0.....x-1;
        return v[randIndex];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */