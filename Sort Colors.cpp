class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j = 1, temp ;
        for(int i =0; i< nums.size() -1 ; )
        {   
            if(nums[j]<nums[i])
            {   
                temp = nums[i];
                nums[i]= nums[j];
                nums[j]= temp;
                i = 0;
                j= 0;
                
            }
            else i++;
            j++;
            
        }
    }
};
