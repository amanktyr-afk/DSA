class Solution {
	public:
	vector<int> RopeCutting(vector<int>& arr)
	{
	  vector<int>ans;
	  int n=arr.size();
	  sort(arr.begin(),arr.end());
	  for(int i=1;i<n;i++)
	  {
	      if(arr[i]!=arr[i-1])
	      ans.push_back(n-i);
	  }
	  return ans;
	  
	}
};
