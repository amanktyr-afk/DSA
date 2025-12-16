class Solution {
public:
    int bitwiseComplement(int n)
     {  int i=0,r,ans=0;
        if(n==0)
        return 1;
        while(n>0)
        {
            r=!(n%2);
            n/=2;
           ans=r*pow(2,i)+ans;
           i++;
        }
        return ans;
     }
};