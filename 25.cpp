class Solution {
public:
    int findMin(vector<int>& a) {
        int l=0,r=a.size()-1;
        int mid=(l+r)/2;
        while(l<r)
        {
            mid=(l+r)/2;
            if(a[r]>a[mid])
                r=mid;
            else if(a[r]<a[mid])
            {
                l=mid+1;
            }
            else {
                r--;
            }
        }
        
        return a[l];
        
        }
};
