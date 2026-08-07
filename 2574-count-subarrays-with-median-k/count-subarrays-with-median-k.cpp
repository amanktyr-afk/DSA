class Solution {
public:
    int countSubarrays(vector<int>& arr, int k)
    {
       int n=arr.size();
        int pos=-1;
        // finding position of k
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                pos=i;
                break;
            }
        }
        unordered_map<int,int> freq;
        int balance=0;
        freq[0]=1;// for that median m becz k-k=0 ,median will exist sure
        //right side managing by freq map
        for(int i=pos+1;i<n;i++)
        {
            if(arr[i]>k)
            balance++;
            else
            balance--;
            
            freq[balance]++;
        }
        balance=0;
        long long ans=freq[0]+freq[1];
        // left side managing by balancing with right side  by map
        for(int i=pos-1;i>=0;i--)
        {
            if(arr[i]>k)
            balance++;
            else
            balance--;
            
            ans+=freq[-balance]+freq[-balance+1];
        }
        return ans; 
    }
};