class Solution {
public:
    int smallestEvenMultiple(int n){
        if(n % 2 == 0) return n;
        return n*2;
        // if n is multiple of 2 it means it will also the multiple of n so return n
        // if it is not multiple of 2 then multiply it with 2 and return so it will become multiple of 2 as well
        
        
        // OR
        // Short one liner for the above answer           
        return n * (n % 2 + 1);
    }
};