//https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int x;
        for(int i = 0; i< nums.size() + 1; i++)
        {   x = nums[i];
            for (int j = i+1 ; j< nums.size() + 1 ; j++)
          {
            if(nums[j] == x)
                return x;
            
          }
        }
        return 0;
    }
};
