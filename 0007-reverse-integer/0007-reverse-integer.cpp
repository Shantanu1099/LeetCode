// class Solution {
// public:
//     int reverse(int x) {
//         int num = 0;
//         bool isNegative = false;
//         if(x < 0) {
//             x = abs(x);
//             isNegative = true;
//         }
//         while(x) {
//          if (num>INT_MAX/10 || num<INT_MIN/10) return 0; // check 32 bit range if r is outside the range then return 0 

//             int rem = x % 10;
//             x /= 10;
//             if(x > 0) num = (num + rem) * 10; 
//             else num = (num + rem);
//         }
//         return !isNegative ? num : (-1 * num);
//     }
// };

class Solution {                      
public:
    int reverse(int x) {
        int r=0;      // decleare r 
        while(x){
         if (r>INT_MAX/10 || r<INT_MIN/10) return 0; // check 32 bit range if r is outside the range then return 0 
         r=r*10+x%10; // find remainder and add its to r
         x=x/10;     // Update the value of x
        } 
        return r;  // if r in the 32 bit range then return r
    }
}; 