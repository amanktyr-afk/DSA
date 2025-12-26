class Solution {
public:
    vector<int> countBits(int n)
    {  
        vector<int> ans(n+1,0);
        for(int i=0;i<=n;i++)
        {   int ones=0 ,j=32,a=i;
            while(j--)
            {
                if(a&1)
                
                
                 ones++;
                 a>>=1;
            }
            ans[i]=ones;
        }
        return ans;
    }
};