//https://leetcode.com/problems/find-all-duplicates-in-an-array/
//Last solution - Time Exceeded

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int arr[n+1];
        memset(arr,0,sizeof(arr));
        int y;
        for(int i=0; i< n; i++)
        {
            arr[nums[i]]++;
            if(arr[nums[i]]==2)
                y = nums[i];
        }
       return y;
    }  
};
