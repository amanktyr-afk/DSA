class Solution {
  public:
    int getMinimumDays(int N, string S, vector<int> &P) 
    {  
        int i=0,days=0,j=0;
       while(i<N-1)
       {
           while(S[i]==S[i+1] && S[i]!='?')
           {
               S[P[j]]='?';
                days++;
                j++;
           }
           i++;
       }
       return days;
    }
};
