class Solution {
public:
    bool isPalindrome(string s) {
    // if(s.size() == 0) return true;
    // s.erase(remove_if(s.begin(), s.end(), []( auto& ch ){ return !isalnum(ch);}), s.end());
    // for(auto &ch: s) ch = tolower(ch);
    // int start = 0;
    // int end = s.size() - 1;
    // while(start < end){
    //     if(!(s[start] == s[end])) return false;
    //     start++;
    //     end--;
    // }  
    // return true;

    // The below approach is a better approach, check which keys are alpha-numeric & if some key is not alnum but the start and end are not equal just mark it as false, problem solved.
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) { 
    // Move 2 pointers from each end until they collide
    while (isalnum(s[i]) == false && i < j) i++; 
    // Increment left pointer if not alphanumeric
    while (isalnum(s[j]) == false && i < j) j--; 
    // Decrement right pointer if no alphanumeric
    if (toupper(s[i]) != toupper(s[j])) return false; 
    // Exit and return error if not match
    }
    
    return true;
    }
};