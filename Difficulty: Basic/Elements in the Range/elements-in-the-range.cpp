class Solution {
public:
    bool check_elements(int arr[], int n, int A, int B) 
    {
        int range = B - A + 1;

        // If range bigger than array → impossible
        if(range > n) return false;

        // Step 1: Mark elements
        for(int i = 0; i < n; i++)
        {
            int val = abs(arr[i]);

            if(val >= A && val <= B)
            {
                int idx = val - A;

                // Mark visited
                if(arr[idx] > 0)
                    arr[idx] = -arr[idx];
            }
        }

        // Step 2: Check all marked
        for(int i = 0; i < range; i++)
        {
            if(arr[i] > 0)
                return false;
        }

        return true;
    }
};