class Solution {
public:
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
        area=max(area,heights[prev]*(i-(-1)-1));// if empty stack the top=-1
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
        area=max(area,heights[prev]*(n-(-1)-1));
     }
     return area;
    }
    int maximalRectangle(vector<vector<char>>& matrix)
    {
      int row=matrix.size();
      int col=matrix[0].size();
      vector<int> height(col,0);
      int ansarea=0;
      for(int i=0;i<row;i++)
      {
        for(int j=0;j<col;j++)
        { 
          if(matrix[i][j]=='0')// gien 0,1 in string form
           height[j]=0;
           else
           height[j]+=1;
        }
        ansarea=max(ansarea,largestRectangleArea(height));
      }
      return ansarea;
    }
};