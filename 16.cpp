class Solution {
public:
    double myPow(double x, int n) {
        
       double  ans=1.0;
        double zero=0;
        if(x==1)
            return 1;
        if(x==-1)
            if(n&1)
                return -1;
        else return 1;
      if(n>0)
        while(n)
        {
            
            if(n&1)
                ans*=x;
            n>>=1;
            x*=x;
        }
        else
        {
            n=abs(n);
            while(n)
            {
                if(n&1) ans/=x;
                n>>=1;
                x*=x;
                if(ans==zero)
                    return 0;
            }
        }
       
       
        
        return ans;
        
    }
};
