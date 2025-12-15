class Solution {
public:
     int matchfind(string s,string b,vector<int>&lps)
     {
        int fir=0,sec=0;
        while(sec<b.size()&&fir<s.size())
        {
            if(b[sec]==s[fir])
            {
                sec++;fir++;
            }
            else
            { 
                if(sec==0)
                 fir++;
                 else
                 sec=lps[sec-1];
            }

        }
        if(sec==b.size())
        return 1;
        else
        return 0;
     }
     void lpsfind(vector<int>&lps,string b)
     {
        int pre=0,suf=1;
        while(suf<b.size())
        {
            if(b[suf]==b[pre])
            {
                lps[suf]=pre+1;
                pre++;suf++;
            }
            else
            {
                if(pre==0)
                suf++;
                else
                pre=lps[pre-1];
            }
        }
     }
    int repeatedStringMatch(string a, string b)
   {     int c=1;
        string s=a;
        while(s.size()<b.size())
        {  
           s+=a;
           c++;
        }
       vector<int>lps(b.size(),0);
       lpsfind(lps,b);
       if(matchfind(s,b,lps))
        return c;
       else
       {
        s=s+a;
        c++;
        if(matchfind(s,b,lps))
        return c;
        else 
        return -1;
       }
   }
};