class Solution {
public:
// we can do it in O(1) space by 2 pointer 
  // but doing O(n) space becz using stack  
    void reverseString(vector<char>& s) 
    {
       stack<char> st;
       for(int i=0;i<s.size();i++)
       {
        st.push(s[i]);
       } 
       int i=0;
       while(!st.empty())
       {
         s[i]=st.top();
         i++;
         st.pop();
       }
    }
};