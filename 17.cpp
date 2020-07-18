#define all(v) v.begin(),v.end()
#define pb push_back
#define fi first
#define se second
#define mp make_pair
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> ans;
    for(auto it:nums)
        m[it]++;
        vector<pair<int,int>> v;
        for(auto it:m)
        {
            v.pb(mp(it.se,it.fi));
        }
        sort(all(v));
        reverse(all(v));
        for(auto it:v)
        {
            if(k==0)
                break;
            else ans.pb(it.se);
            k--;
        }
        return ans;
        
    }
};
