class Solution {
public:
    bool checkPerfectNumber(int num) {
        // int sumOfNum = 0;
        // for(int i = 1 ; i < ((num/2) + 1); i++) {
        //     if(num % i == 0) sumOfNum+=i;
        // }
        // return sumOfNum == num; 
        
        
        return ((num == 6) || (num == 28) || (num == 496) || (num == 8128) || (num == 33550336));
        // All perfect number - (2^(p − 1)) × (2^(p) − 1), where p is the prime number starting from 2 - Reference - https://en.wikipedia.org/wiki/List_of_Mersenne_primes_and_perfect_numbers
    }
};