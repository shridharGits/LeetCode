class Solution {
public:
    int solve(int i, vector<int> &nums, int k, int product)
    {
        if(i == nums.size())
        {
            if(product<k)
            {
                return 1;
            }
            return 0;
        }
        int a = solve(i+1, nums, k, product*nums[i]);
        int b = solve(i+1, nums, k, nums[i]);
        return a+b;
    }
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int pro = 1;
        int right = 0;
        int ans = 0;
        int left =0;
        while(right<nums.size())
        {
            pro*=nums[right];
            while(pro>=k)
            {
                pro/=nums[left];
                left++;
            }
            ans+=(right-left)+1;
            right++;
        }
        return ans;
    }
};