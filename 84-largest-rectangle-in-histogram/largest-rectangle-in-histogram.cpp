class Solution {
public:
    int largestRectangleArea(vector<int>& heights)
    {
     int n=heights.size();
     vector<int> NSR(n,n);
     vector<int> NSL(n,-1);
      stack<int> st;
     for(int i=n-1;i>=0;i--)
     {  
        while(!st.empty() && heights[i]<heights[st.top()])
        {
            NSL[st.top()]=i;
            st.pop();
        }
        st.push(i);
     }
    stack<int> pt;
     for(int i=0;i<n;i++)
     { 
        while(!pt.empty() && heights[i]<heights[pt.top()])
        {
          NSR[pt.top()]=i;
          pt.pop();
        }
         pt.push(i);
     }
     int ans=0;
     for(int i=0;i<n;i++)
     {
       int temp=heights[i]*(NSR[i]-NSL[i]-1);
       ans=max(ans,temp);
     }
      return ans ;
    }
};