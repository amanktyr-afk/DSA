/*Returns an array of all n-bit gray codes sequence.
You are required to complete below method. */
class Solution {
  public:
    string bin_to_gray(int i,int N)
    {  
        string res="";
        while(i>0)
        {
            res=char((i%2)+'0')+res;
            i/=2;
        }
        res=string(N-res.length(),'0')+res; // get binary
        string gray=res;
        for(int j=1;j<N;j++)
        {
            gray[j]=((res[j-1]-'0')^(res[j]-'0'))+'0';
        }
        return gray;
    }
    vector<string> generateCode(int N)
    {
      vector<string>ans;
      for(int i=0;i<pow(2,N);i++) // or 1<<N = 2^N times (left shift) 
      {
          ans.push_back(bin_to_gray(i,N));
      }
      return ans;
      
    }
};