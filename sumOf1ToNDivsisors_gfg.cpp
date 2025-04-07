class Solution {
  public:
    int sumOfDivisors(int n) {
        
    int total = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                total += j;
            }
        }
    }
    return total;
    }
};
