class Solution {
public:
    int totalHammingDistance(vector<int>& arr) 
    {    //overall  complexit  O(n) not O(n^2)
       int n=arr.size(),count=0,i=32;
       while(i--)        // constant time becz only 32 times will run this loop         
       { int ones=0,zeroes=0;
         for(int j=0;j<n;j++)
         {
          if(arr[j]&1)    // checking last bit of each ele is set or not
          ones++;         
          else
          zeroes++;
          arr[j]>>=1;
          }
          count=count+(ones*zeroes);      //ones*zeroes   will give no of hamming distance by each  lsb 
       }
       return count;
    }
};