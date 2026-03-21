class Solution {
  public:
    int transform(string A, string B)
    {   
        int n1=A.size(),n2=B.size();
        int i=n1-1,j=n1-1,steps=0;
        if(n1!=n2)
        return -1;
        vector<int>check(52,0);
        //checking all char of B is present in A or not by push pop
        ///pushing
        for(char c : A)
        {
            if(c>='a' && c<='z')
              check[c-'a']++;
            else
              check[c-'A'+26]++;
        }
        //poping
         for(char c : B)
        {
            if(c>='a' && c<='z')
              check[c-'a']--;
            else
              check[c-'A'+26]--;
        }
        //now container must be all 0 if equal
        for(int x: check)
        if(x!=0)
        return -1;
        while(i>=0)
        {
            if(A[i]==B[j])
            {
                i--;
                j--;
            }
            else
            {
                i--;
                steps++;
            }
        }
        return steps;
    }
};
