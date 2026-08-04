class Solution {
  public:
    void diagonalSort(vector<vector<int>>& mat) 
    {
       vector<int> temp;
       int rows=mat.size();
       int col=mat[0].size();
       //upper triangle 
       for(int j=1;j<col;j++)
       {   
           temp.clear();
           int r=0;
           int c=j;
           while(r<rows && c<col)
          { 
           temp.push_back(mat[r][c]);
           r++;
           c++;
           }
           sort(temp.begin(),temp.end(),greater<int>());
            r=0;
            c=j;
            int k=0;
           while(r<rows && c<col)
           {
               mat[r][c]=temp[k];
               r++;c++;k++;
           }
       }
       //lower traingle
        for(int i=1;i<rows;i++)
       {   
           temp.clear();
            int r=i;
            int c=0;
           while(r<rows && c<col)
           { 
           temp.push_back(mat[r][c]);
           r++;c++;
           }
           sort(temp.begin(),temp.end());
           r=i;c=0;
           int k=0;
           while(r<rows && c<col)
           {
               mat[r][c]=temp[k];
               r++;c++;k++;
           }
       }
       
    }
};