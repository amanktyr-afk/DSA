class Solution {
  public:
    void reverse(string&s,int l,int r)
    {
        while(l<r)
        {
            swap(s[l++],s[r--]);
        }
    }
    string reverseWords(string&s)
    {
       
       int i=0,j=0;
       int n=s.size();
        reverse(s,0,n-1);// reverse whole string
        while(i<n)
    {   
      
       while(i<n && s[i]=='.')//skipping dots
       i++;
       if(i>=n)
        break;
       if(j!=0)   // add single dot
       s[j++]='.';
       int start=j; 
       while(i<n && s[i]!='.') //copy word
       s[j++]=s[i++];
       reverse(s,start,j-1);//reverse word
    }
       
       s.resize(j);
       return s;
    }
};