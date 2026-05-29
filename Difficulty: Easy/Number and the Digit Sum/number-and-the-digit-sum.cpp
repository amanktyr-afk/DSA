class Solution {
  public:
    long long digitsum(long long num)
    {    
        if(num==0)
        return num;
        return(num%10+digitsum(num/10));
    }
    bool check(long long x,long long k)
    {
       return(x-digitsum(x)>=k);
    }
    long long int numberCount(long long int N, long long int K)
    {
      int low=1;
      int high=N;
      int ans=N+1;
      while(low<=high)
      {
          int mid=low+(high-low)/2;
          if(check(mid,K))
          {
              ans=mid;
              high=high-1;
          }
          else
          {
              low=low+1;
          }
      }
      if(ans==N+1)
      return 0;
      else
      return N-ans+1;
    }
};