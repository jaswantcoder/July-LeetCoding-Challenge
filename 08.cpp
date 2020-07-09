#define pb push_back
#define all(v) v.begin(),v.end()


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
    sort(all(nums));
        int i,j,k;
        vector<vector<int>> ans;
        if(nums.size()<3) return ans;
        
        for(i=0;i<nums.size()-2;i++)
        {
            j=i+1;
            k=nums.size()-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]<0)
                    j++;
                else if(nums[i]+nums[j]+nums[k]==0)
                {
                    vector<int> t;
                    t.pb(nums[i]);t.pb(nums[j]);t.pb(nums[k]);
                    ans.pb(t);
                    while(j<k && t[1]==nums[j]) j++;
                }
                else
                {
                    k--;
                }
                while(i<nums.size()-2 && nums[i]==nums[i+1]) i++;
            }
        }
        return ans;
        
    }
};
