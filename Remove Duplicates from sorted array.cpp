class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0 , j, k,x ;
        int n = nums.size();
        int y = nums[n-1];
        for(int j =1; j< n ; )
        {   if(nums[i] == y)
            {
              return i+1;
            }
            if(nums[i] == nums[j])
            {
                
                x = j;
                for(k = j+1; k<n ; k++)
                {
                    nums[x] = nums[k];
                    x++;
                }
            }
            else 
            {
                i++;
                j++;
            }
        }
        
        return i+1;
    }
};
