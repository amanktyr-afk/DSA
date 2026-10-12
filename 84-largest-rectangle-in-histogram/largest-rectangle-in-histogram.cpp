class Solution {
public:
// soln in only one traversal 
    int largestRectangleArea(vector<int>& heights)
    {
     int n=heights.size();
     int area=0;
     stack<int>st;
     for(int i=0;i<n;i++)
     {
       while(!st.empty() && heights[st.top()]>heights[i])
       {
        int prev=st.top();
        st.pop();
        if(!st.empty())
        area=max(area,(heights[prev]*(i-st.top()-1)));
        else
        area=max(area,heights[prev]*i);
       }
       st.push(i);
     }
     while(!st.empty())
     {
        int prev=st.top();
        st.pop();
        if(!st.empty())
        area=max(area,(heights[prev]*(n-st.top()-1)));
        else
        area=max(area,heights[prev]*n);
     }
     return area;
    }
};