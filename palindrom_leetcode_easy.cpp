// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0) 
//             return false;
//        int d_num = x;
//        int digit;
//        int rev = 0;
//        while(x!=0){
//         digit = x%10;
//         rev = (rev*10) + digit;
//         x=x/10;
//        }
//        if (rev == d_num){
//         return true;
//        }
//        else{
//         return false;
//        }
//     }
// };


class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) 
            return false;
        
        int reversedHalf = 0;
        
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10; // Extract last digit and add to reversedHalf
            x /= 10; // Remove the last digit from x
        }
        
        // If original number was odd-length, remove middle digit (by reversedHalf / 10)
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
