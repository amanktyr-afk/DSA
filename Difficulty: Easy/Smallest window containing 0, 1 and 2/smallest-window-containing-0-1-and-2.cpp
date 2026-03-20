// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) 
    { 
      int n=S.size();
      int diff=3,first=0,sec=0,len=INT_MAX;
      int temp=diff;
      vector<int>count(256,0);
      while(sec<n)
      {   
           while(sec<n && diff)
         {
             if(count[S[sec]]==0)
             diff--;
            count[S[sec]]++;
            sec++;
         }
         while(diff==0)
         {
            len=min(len,sec-first);
            count[S[first]]--;
            if(count[S[first]]==0)
            diff++;
            first++;
         }
        
      }
      if(len==INT_MAX)
      return -1;
      else
      return len;
      
    }
};

