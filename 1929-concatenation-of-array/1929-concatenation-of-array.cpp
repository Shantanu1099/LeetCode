class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> getConc(nums.size() * 2);
        for(int i = 0; i < nums.size(); i++) {
            getConc[i] = nums[i];   
            getConc[i + nums.size()] = nums[i];   
        }
        return getConc;
    }
};