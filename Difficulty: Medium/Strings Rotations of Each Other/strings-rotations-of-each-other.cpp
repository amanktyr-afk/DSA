
class Solution {
  public:
     void lpsfind(vector<int>&lps,string&s2)
     {
         int pre=0,suf=1;
         while(suf<s2.size())
         {
          if(s2[pre]==s2[suf])
           {
               lps[suf]=pre+1;
               suf++;pre++;
           }
           else
           {
              if(pre==0)
              {
                  lps[suf]=0;
                  suf++;
              }
              else
               pre=lps[pre-1];
           }
         }
     }
    int strst(string& temp,string& s2)
    {
        vector<int>lps(s2.size(),0);
        lpsfind(lps,s2);
        int first=0,sec=0;
        while(first<temp.size()&&sec<s2.size())
        {
            if(temp[first]==s2[sec])
            {
                first++;sec++;
            }
            else
            {
                if(sec==0)
                first++;
                else
                sec=lps[sec-1];
            }
        }
        if(sec==s2.size())
        return 1;
        else
        return 0;
    }
    bool areRotations(string &s1, string &s2)
    {
      string temp=s1+s1;
      return strst(temp,s2);
       
    }
};