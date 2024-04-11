class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.length() - 1;
        while(i < j) {
            
        bool isVowelI = (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' );
            
        bool isVowelJ = (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U' );
            
            if(!isVowelI) i++;
            
            else if(!isVowelJ) j--;
            
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            
        }
        return s;
    }
};