class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ct = 0;
        for(auto &list: items) {
            if(ruleKey == "type" && ruleValue == list[0]) {
                ct++;
            } else if(ruleKey == "color" && ruleValue == list[1]) {
                ct++;
            } else if(ruleKey == "name" && ruleValue == list[2]) {
                ct++;   
            }
        }
        return ct;
    }
};