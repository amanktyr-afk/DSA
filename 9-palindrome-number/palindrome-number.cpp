class Solution {
public:
    bool isPalindrome(int x) {
    int rem,ans=0,n=x;
        if(x<0)
         return 0;
        while(x!=0)
        {  
            rem=x%10;
             x/=10;
             if(ans>INT_MAX/10)
            return false;
            ans=ans*10+rem;
        } 
        if(ans==n)
        return true;
        else
        return false;
    }
};