class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()==2) return {0,1};
        vector<pair<int,int>> v;
        int i,j;
        for(i =0; i<nums.size(); i++)
            v.push_back({nums[i],i});
        sort(v.begin(), v.end());
        int front =0, last = nums.size()-1;
        while(front<last)
        {
            if(v[front].first + v[last].first== target)
                return {front,last};
            else if(v[front].first + v[last].first > target)
                last--;
            else if(v[front].first + v[last].first < target)
                front++;
        }
       
        return {0,1};
    }
};
