class Solution {
public:
    int trap(vector<int>& height) 
    {   int n=height.size();
      int i,leftmax=0,rightmax=0,minsupport,longest=0,lb,water=0;
       for(i=0;i<n;i++)
       {
        if(height[i]>longest)
        {
            longest=height[i];
            lb=i;
        }
       } 
       for(i=1;i<lb;i++)
       {
         leftmax=max(leftmax,height[i-1]);
          //minsupport=min(leftmax,lb) ; // leftmax<lb always so no need to right this line becz leftmax will be minsupport till lb building
         if(leftmax>height[i])
            {
                water+=(leftmax-height[i]);
            }
       } 
       for(i=n-2;i>lb;i--)
       {
            rightmax=max(rightmax,height[i+1]);
            // minsupport=min(rightmax,lb) // rightmax will always be min 
            if(rightmax>height[i])
            {
                water+=(rightmax-height[i]);
            }
       }
       return water;
    }
};