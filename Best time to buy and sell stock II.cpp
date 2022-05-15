class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum =0,y = -1,i,j;
        if(prices.size()==1)
            return 0;
        if(prices.size() == 2)
        {
            if(prices[1]>prices[0])
                return prices[1]- prices[0];
            else return 0;
        }
        for(i = 1;i<prices.size(); i++)
        {
            if(prices[i-1]<prices[i])
            {
                y = prices[i-1];
                break;
            }
        }
        if(y == -1)
            return 0;
        for( j = i; j< prices.size(); j++)
        { if( j != prices.size()-1)
          {
            if(prices[j+1]< prices[j])
            {
                sum+= prices[j]-y;
                y = prices[j+1];
            }
          }
         else if ( j == prices.size()-1)
         {
            if(prices[j]>y)
           {
            sum+= prices[j] - y;
           }   
         }
        }
        
        return sum;
    }
};
