#include <limits.h>

class Solution {
public:
    int reverse(int x) {
        int digit;
        int rev = 0;

        while (x != 0) {
            digit = x % 10;

            // Check for overflow before updating rev
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) 
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) 
                return 0;

            rev = (rev * 10) + digit;
            x = x / 10;
        }

        return rev;
    }
};
