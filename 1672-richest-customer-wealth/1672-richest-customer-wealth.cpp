class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_money = 0;
        for(auto & ele : accounts){
            int sum_money = 0;
            for(auto & ele2 : ele){
               sum_money += ele2 ; 
            }
            if(sum_money > max_money){
                max_money = sum_money;
            }
        }
        return max_money;
    }
};