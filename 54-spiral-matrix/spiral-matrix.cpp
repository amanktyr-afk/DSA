class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {  
       int m=matrix.size(),n=matrix[0].size();
       vector<int> v((n*m),0);
       int left=0,top=0,bottom=(m-1),right=(n-1),i=0;
       
       while(top<=bottom && left<=right)
       {
        for(int a=left;a<=right;a++)
        {
            v[i]=matrix[top][a];
            i++;
        }
        top++;
        for(int b=top;b<=bottom;b++)
        {
            v[i]=matrix[b][right];
            i++;
        }
        right--;
        if(top<=bottom)
        {
            for(int c=right;c>=left;c--)
         {
            v[i]=matrix[bottom][c];
            i++;
          }
        bottom--;
        }
        if(left<=right)
        {
          for(int d=bottom;d>=top;d--)
          {
            v[i]=matrix[d][left];
            i++;
          }
        left++;
        }
     }
     return v;
   }
};