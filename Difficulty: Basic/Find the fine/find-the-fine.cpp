

class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) 
    {
        long long int total_fine=0;
        int n=car.size();
        for(int i=0;i<n;i++)
        {
            if(date%2)
            {
                if(car[i]%2==0)
                total_fine+=fine[i];
            }
            else
            {
                if(car[i]%2)
                total_fine+=fine[i];
            }
        }
        return total_fine;
    }
};