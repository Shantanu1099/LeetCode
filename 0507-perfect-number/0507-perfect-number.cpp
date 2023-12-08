class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sumOfNum = 0;
        for(int i = 1 ; i < ((num/2) + 1); i++) {
            if(num % i == 0) sumOfNum+=i;
        }
        return sumOfNum == num; 
    }
};