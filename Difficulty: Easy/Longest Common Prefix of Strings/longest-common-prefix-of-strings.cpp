
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr)
    {
        string ans = "";
        int n = arr.size();
        int i = 0, j = 0;

        int minstr = arr[0].size();
        
        // find minimum length string
        i = 1;
        while(i < n)
        {
            if(arr[i].size() < minstr)
                minstr = arr[i].size();
            i++;
        }

        while(j < minstr)
        {  
            i = 0;
            while(i < n-1)
            {
                if(arr[i][j] != arr[i+1][j])
                    return ans;
                i++;
            }

            ans += arr[0][j];
            j++;
        }

        return ans;
    }
};