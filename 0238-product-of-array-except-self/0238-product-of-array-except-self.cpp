class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int pro = 1;
        vector<int> ans(n,0);
        int zeroes = 0;
        for(int i = 0; i<n; i++)
        {
            if(nums[i] == 0)
            {
                zeroes++;
                continue;
            }
            pro *= nums[i];
        }
        if(zeroes > 1) return ans;
        if(zeroes == 1)
        {
            for(int i = 0; i<n; i++)
            {
                if(nums[i] == 0)
                {
                    ans[i] = pro;
                }
                else ans[i] = 0;
            }
            return ans;
        }
        
        for(int i = 0; i<n; i++)
        {
            ans[i] = pro/nums[i];
        }
        return ans;
    }
};