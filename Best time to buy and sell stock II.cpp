class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, j=0, sum =0,y=0;
        for( i =1; i< prices.size(); i++)
        {
            if(prices[i]<prices[i-1])
            {
                sum+=y;
                y=0;
                j =i;
            }
            else 
            {
                y = prices[i]-prices[j];
            }
        }
        sum +=y;
        return sum;
    }
};
