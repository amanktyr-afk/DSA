class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) 
    {
       vector<vector<int>> ans;
       int rows=arr.size();
       sort(arr.begin(),arr.end(),[](vector<int> &a,vector<int> &b)
             {return a[0]<b[0];}
            );
             vector<int> curr=arr[0];
             for(int i=1;i<rows;i++)
             {
                 if(arr[i][0]<=curr[1])
                 curr[1]=max(curr[1],arr[i][1]);
                 else
                 {
                     ans.push_back(curr);
                     curr=arr[i];
                 }
             }
             ans.push_back(curr);// last curr added into ans 
             return ans;
    }
    
};