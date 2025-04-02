class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int originalA = a, originalB = b; 
        int gcd,lcm;
        
        //GCD using the Euclidean algorithm
        while (a > 0 && b > 0) {
            if (a > b)
                a = a % b;
            else
                b = b % a;
        }
        
        if(a==0)
            gcd=b;
        else
            gcd=a;
        //int gcd = (a == 0) ? b : a;
        lcm = abs(originalA * originalB) / gcd; //original values for LCM

        return {lcm, gcd}; 
    }
    
    
};
