class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int count=0;
        int d_num,digit;
        d_num=n;
        while(n!=0){
            digit = n%10;
            if(digit != 0 && d_num%digit==0)
                {count++;}
            n = n/10;
        }
        return count;
        
    }
};

