class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> v={0,0};
        int x=0,bit,i;
        for(auto it:nums)
            x=x^it;
            for(i=0;i<32;i++)
                if(x & (1<<i))
                {bit=i;break;}
        
  
        for(auto j:nums)
          {
            if(j & (1<<bit))
                v[0]^=j;
        }
        
        v[1]=v[0]^x;
       
        return v;
    }
};
