class Solution {
public:
    int countPrimes(int n) {
        int count=1,i;
       if(n==0||n==1)
       {
           return 0;
           
       }
        else
        {
     for(int num =2; num < n; num++) {

        for( i = 2; i <= (num / 2); i++) {

            if(num % i == 0) {
                i = num;
                count--;
            }
        }

       
        if(i != num) {
            count++;
        }
    }
        return count;
        
        }
    }
};