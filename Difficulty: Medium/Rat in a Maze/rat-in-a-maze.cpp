class Solution {
  public:
   bool valid(int i,int j,int n)
   {
       return i>=0&&j>=0&&i<n&&j<n;
   }
   int row[4]={1,0,0,-1};
   int column[4]={0,-1,1,0};
   string direction="DLRU";
    void total(vector<vector<int> >&maze,vector<vector<bool> >&visited,int i,int j,int n,string&path,vector<string>&ans)
    {
        if(i==n-1&&j==n-1)
        {
            ans.push_back(path);
            return;
        }
        visited[i][j]=1;
        for(int k=0;k<4;k++)
        {
           if(valid(i+row[k],j+column[k],n)&&maze[i+row[k]][j+column[k]]&&!visited[i+row[k]][j+column[k]])
            {
               path.push_back(direction[k]);
               total(maze,visited,i+row[k],j+column[k],n,path,ans);
               path.pop_back();
            }
        }
        visited[i][j]=0;
     }
    vector<string> ratInMaze(vector<vector<int> >& maze) 
    {  
       int n=maze.size(),i=0,j=0;
      vector<vector<bool> >visited(n,vector<bool>(n,0));
      vector<string>ans;
      string path;
      if(maze[0][0]==0||maze[n-1][n-1]==0)
      return ans;
      total(maze,visited,i,j,n,path,ans);
      return ans;
      
    }
};