class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) 
    {
       int n=plants.size();
       int i=0,steps=0,x=-1;
       int cap=capacity;
       while(i<n)
       {
         if(plants[i]<=cap)
         {
            steps++;
            cap-=plants[i];
            i++;
         }
         else
         {
            steps+=2*((i-1)-x);
            cap=capacity;
         }
       }
       return steps;
    }
};