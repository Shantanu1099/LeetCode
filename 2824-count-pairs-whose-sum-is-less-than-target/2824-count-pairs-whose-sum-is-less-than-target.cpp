class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int ct = 0;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j < nums.size(); j++) {
                if((nums[i] + nums[j] < target) && i < j) ct++;
            }
        }
        return ct;
    }
};