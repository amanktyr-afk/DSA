// User function Template for C++
int getmax(int*arr,int n)
{    int mx=arr[0];
    for(int i=1; i<n; i++)
     mx=max(mx,arr[i]);
   return mx;
}
void countsort(int arr[],int n,int e)
{
    int ans[n];
    int fre[10]={0};
    // freq storing
    for(int i=0; i<n; i++)
    {
       fre[(arr[i]/e)%10]++;
    }
    //cumulative fre
    for(int i=1; i<10; i++)
    {
        fre[i]=fre[i]+fre[i-1];
    }
    for(int i=n-1; i>=0; i--)
    { 
      int idx=(arr[i]/e)%10;
      ans[fre[idx]-1]=arr[i];
      fre[idx]--;
    }
    for(int i=0; i<n; i++)
    {
        arr[i]=ans[i];
    }
}
void radixSort(int arr[], int n)
{
  int mx=getmax(arr,n);
  for(int e=1; mx/e>0; e*=10)
  {
      countsort(arr,n,e);
  }
};