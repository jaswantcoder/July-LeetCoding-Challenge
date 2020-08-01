class Solution {
public:
     int climbStairs(int n) {
            if(n==1) return 1;
         if(n==2) return 2;
         int a=1,b=2;
         for(int i=3;i<=n;i++)
         {
             a=a+b;
             swap(a,b);
         }
         return b;
     }
 /*   int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        int a,b,i;
        a=1;b=2;
        for(i=3;i<=n;i++)
        {
            b=a+b;
            a=b-a;
            
        }
        return b;
        
    }
    */
};
