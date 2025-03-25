class Solution {
public:
    int findMinFibonacciNumbers(int k) {
      vector <int > fibList;
      fibList.push_back(1);  
      fibList.push_back(1);
      int i=0;
      while(fibList.back()<=k)
      {
            fibList.push_back(fibList[i]+fibList[i+1]);
            i++;
      } 
      int l=fibList.size();
      int sum=0;
      int c=0;
      for(i=l-1;i>=0;i--)
      {
            if(fibList[i]>k)
                continue;
            if((sum+fibList[i])<=k)
            {
                sum+=fibList[i];
                c++;
            }
            if(sum==k)
                return c;
      }
      return -1; 
    }
};