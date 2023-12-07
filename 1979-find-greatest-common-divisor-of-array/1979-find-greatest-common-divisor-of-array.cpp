class Solution {
public:
    int findGCD(vector<int>& nums) {
        int gcd = 0;
        int size = nums.size() - 1;
        sort(nums.begin(), nums.end());
        for(int i = 1; i <= nums[0]; i++) {
            if(nums[0] % i == 0 && nums[size] % i == 0) gcd = max(gcd, i);
        }
        return gcd;
    }
};