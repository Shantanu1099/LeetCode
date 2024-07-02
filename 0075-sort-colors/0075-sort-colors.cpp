class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;
        for(int &x : nums) {
            if (x == 0) count_0++;
            if (x == 1) count_1++;
            if (x == 2) count_2++;
        }
        // cout << count_0 << " -- " << count_1 << " -- " << count_2 << endl;
        for(int i = 0; i < nums.size(); i++) {
            if(count_0 > 0) {
                nums[i] = 0;
                count_0--;
            } else if (count_1 > 0) {
                nums[i] = 1;
                count_1--;
            } else {
                nums[i] = 2;
            }
        }
    }
};