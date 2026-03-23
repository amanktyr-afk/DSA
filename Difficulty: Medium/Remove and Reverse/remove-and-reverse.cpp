
class Solution {
public:
    string removeReverse(string S)
    {
        vector<int> freq(26,0);
        int n=S.length();
        int i=0,j=n-1;
        for(auto x : S)
        freq[x-'a']++;
        vector<int> pos(26,-1);// stores latest pos of non repeting char
        bool front=true;
        while(i<=j)
        {
            if(front==true)
            {
                  if(freq[S[i]-'a']>1)
                  front=false;
                  if(freq[S[i]-'a']==1)
                  pos[S[i]-'a']=i;
               freq[S[i]-'a']--;
               i++;
            }
            else
            {
                 if(freq[S[j]-'a']>1)
                 front=true;
                 if(freq[S[j]-'a']==1)
                 pos[S[j]-'a']=j;
               freq[S[j]-'a']--;
               j--;
            }
        }
        string str="";
        for(int i=0;i<n;i++)
        {
            int ele=S[i]-'a';
            if(pos[ele]==i)
            str.push_back(S[i]);
        }
        if(front==false)
        reverse(str.begin(),str.end());
        return str;
    }
};
