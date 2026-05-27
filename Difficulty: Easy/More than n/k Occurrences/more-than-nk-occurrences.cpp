class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) 
    {
      int count=0;
      int n=arr.size();
      unordered_map<int,int> fre;
      for(int i=0;i<n;i++)
      {
        fre[arr[i]]++;  
      }
      for(auto i=fre.begin();i!=fre.end();i++) //fre.begin( returns iterator not int so auto)
      {
          if(i->second > (n/k))
          count++;
      }
      return count;
    }
};