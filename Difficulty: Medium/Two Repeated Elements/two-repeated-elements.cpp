
class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {

        vector<int> ans;

        for(int i=0;i<arr.size();i++)
        {
            int idx = abs(arr[i]);

            if(arr[idx] < 0)
            {
                ans.push_back(idx);
            }
            else
            {
                arr[idx] = -arr[idx];
            }
        }

        return ans;
    }
};