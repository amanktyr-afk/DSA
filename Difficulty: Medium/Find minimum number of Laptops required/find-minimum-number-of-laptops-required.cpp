class Solution {
	public:
	int minLaptops(int N, int start[], int end[])
	{    
	  sort(start,start+N);
	  sort(end,end+N);
	  int i=0,j=0;
	  int ans=0,curr=0;
	  while(i<N)
	  {
	     if(start[i]<end[j])
	     {
	         curr++;
	         ans=max(curr,ans);
	         i++;
	     }
	     else
	     {
	         curr--;// laptop is free
	         j++;
	     }
	  }
	  return ans;
	}
};
