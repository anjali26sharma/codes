class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i , j=0;
        if(nums.size() == 1)
            return ;
        for(i = 1 ; i< nums.size() ;  )
        {   
            if( nums[j] != 0)
            {
                i++;
                j++;
                continue;
            }
            if(nums[j] == 0 )
            {  if(nums[i] !=0)
              { nums[j] = nums[i];
                nums[i] = 0;
                i++;
                j++;
               continue;
              }
             if(nums[i]==0)
             {
                 i++;
             }
            }
            
        }
    }
};
