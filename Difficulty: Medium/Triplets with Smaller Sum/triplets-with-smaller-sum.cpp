class Solution {
  public:
    long long countTriplets(int n, long long sum, long long arr[])
    {
        sort(arr, arr + n);
        long long count = 0;

        for(int i = 0; i < n - 2; i++)
        {
            int left = i + 1;
            int right = n - 1;
            long long target = sum - arr[i];
            while(left < right)
            {
                if(arr[left] + arr[right] < target)
                {
                    count += (right - left); //becz array  is sorted right-1<right so count
                                             //right-1 and right combination in one step
                    left++;
                }
                else
                 right--;
            }
        }
        return count;
    }
};
