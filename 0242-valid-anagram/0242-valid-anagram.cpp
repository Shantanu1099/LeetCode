class Solution {
public:
    bool isAnagram(string s, string t) {
        // T.C - O(N(log(N)))
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s==t;


        // Using Hash Tables
        // unordered_map<char, int> ump;
        // for(auto &ch: s){
        //     ump[ch]++;
        // }
        // for(auto &ch: t){
        //     ump[ch]--;
        // }
        // for(auto &k_v: ump){
        //     if(k_v.second != 0) return false;
        // }
        // return true;


        // Using Hashes with arrays
        int arr[26] = {0};
        for(auto &ch: s){
            arr[ch - 'a']++;
        }
        for(auto &ch: t){
            arr[ch - 'a']--;
        }
        for(auto &val: arr){
            if(val != 0) return false;
        }
        return true;
    }
};