class Solution {
public:
    int countPrimes(int n) 
    {
       vector<int>mark(n,1);
       int count=0;
       if(n<=2)
        return 0;
       for(int i=2;i<n;i++)
       {
         mark[i]=1;
       }
       for(int i=2;i*i<n;i++)
       {
        if(mark[i]==1)
        {
         for(int j=i*i;j<n;j+=i)
            mark[j]=0;
        }
       }
       for(int i=2;i<n;i++)
       {
        if(mark[i]==1)
        count++;
       }
       return count;
    }
};