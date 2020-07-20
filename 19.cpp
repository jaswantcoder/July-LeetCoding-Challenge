#define all(v) v.begin(),v.end()
class Solution {
public:
    string addBinary(string a, string b) {
        
            int n1=a.size(),n2=b.size(),i;
        string ans="";
        int carry=0;
         int    n=min(n1,n2);
        reverse(all(a));
        reverse(all(b));
        for(i=0;i<n;i++)
        {
            ans+=((a[i]-'0'+b[i]+carry-'0')%2  +'0');
            carry=((a[i]-'0'+b[i]+carry-'0')/2)%2;
        }
        while(i<n1)
        {
            ans+=((a[i]-'0'+carry)%2+'0');
            carry=((a[i]-'0'+carry)/2)%2;
            i++;
        }
          while(i<n2)
        {
            ans+=((b[i]-'0'+carry)%2+'0');
            carry=((b[i]-'0'+carry)/2)%2;
            i++;
        }
        if(carry)
            ans+='1';
        reverse(all(ans));
        return ans;
    }
};
