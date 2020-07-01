class Solution {
public:
    int arrangeCoins(int n) {
        int ans=0;
        int i;
       for(i=1;ans<n;i++)
       {
           if(ans==n)
               return ans;
        if(ans<=n-i)
            ans+=i;
           else break;
       }
    return i-1;
    }
};
