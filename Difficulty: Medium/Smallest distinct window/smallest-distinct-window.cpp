class Solution {
  public:
    int findSubString(string& str)
    {
     vector<int>count(256,0);
     int first=0,sec=0,len=str.size();
     int diff=0;
     for(int i=0;i<len;i++)
     {
         if(count[str[i]]==0)
          diff++;
          count[str[i]]++;
     }
     for(int i=0;i<256;i++)
       count[i]=0;
       while(sec<str.size())
       {
           while(sec<str.size()&&diff)
           {
               if(count[str[sec]]==0)
               diff--;
               count[str[sec]]++;
               sec++;
           }
           while(diff==0)
           {
               len=min(len,sec-first);
               count[str[first]]--;
               if(count[str[first]]==0)
               diff++;
               first++;
               
           }
       }
       return len;
    }
};