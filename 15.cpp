
#define all(v) v.begin(),v.end()
class Solution {
public:
    string reverseWords(string s) {
     int i,l,r;
        bool start=false;
        string x="",ans="";
        s+=" ";
        bool first=true;
        for(i=0;i<s.size();i++)
        {
             if(!start && s[i]!=' ')
            {
                start=true;
               x+=s[i];
            }
            else if(start && s[i]==' ')
            {
                start=false;
                r=i;
                if(first)
                    ans+=x;
                else ans=x+" "+ans;
                x="";
                first=false;
            }
            else if(start && s[i]!=' ')
            {
                x+=s[i];
            }
            
        }
        
        return ans;
        

    }
};
