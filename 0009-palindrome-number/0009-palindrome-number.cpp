class Solution {
public:
    bool isPalindrome(int x) {
        // string str = to_string(x);
        // for(int i = 0, j = str.size() - 1 ; i < j; i++, j--) {
        //     if(str[i] != str[j]) return false;
        // }
        
        
        
        // Using vector for storing the values
        int temp = x;
        vector <int> x_val;
        if(temp < 0) return false;
        while(temp > 0) {
            int rem = temp % 10;
            x_val.push_back(rem);
            temp /= 10;
        }
        for(int i = 0, j = x_val.size() - 1 ; i < j; i++, j--) {
            if(x_val[i] != x_val[j]) return false;
        }
        return true;
    }
};