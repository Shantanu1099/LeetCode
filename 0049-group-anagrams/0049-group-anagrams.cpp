class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // T.C - O(N(log(N))) S.C - O(N)
        unordered_map<string, vector<string>> mp;
        for(auto &str: strs) {
            string word = str;
            sort(word.begin(), word.end());
            mp[word].push_back(str);
        }
        vector<vector<string>> st_vv;
        for(auto &k_v: mp) {
            st_vv.push_back(k_v.second);
        }
        return st_vv;
    }
};