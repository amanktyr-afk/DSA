class Solution {
public:
    string sortSentence(string s)
    {  int n=s.size();
      vector<string> ans(10);
      string temp;
      int i=0,count=0;
      for(i=0;i<n;i++)
      {
        if(s[i]==' ')
        {
            int position=temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[position]=temp;
            temp.clear();
            count++;
        }
        else
        temp=temp+s[i];
      }
      // adding last word in ans
       int position=temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[position]=temp;
            temp.clear();
            count++;
    // copying all ans ele with space
        for(i=1;i<=count;i++) 
       {
         temp+=ans[i];
         temp+=' ';
        }
       temp.pop_back(); // Removing extra space from last
       return temp;
       
    }
};