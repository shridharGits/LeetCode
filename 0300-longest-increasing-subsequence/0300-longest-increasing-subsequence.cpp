class Solution {
public:
    int solve(int i, int prevIndex, vector<int>& nums, vector<vector<int>>& dp)
    {
        if(i>=nums.size())
        {
            return 0;
        }
        if(dp[i][prevIndex+1]!=-1)
        {
            return dp[i][prevIndex+1];
        }
        int take = INT_MIN;
        if(prevIndex==-1 || nums[prevIndex]<nums[i])
        {
            take = solve(i+1, i, nums, dp)+1;
        }
        int notTake = solve(i+1, prevIndex, nums, dp);
        return dp[i][prevIndex+1] = max(take, notTake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        vector<vector<int>>dp(n+1, vector<int> (n+1, -1));
        // for(int i = 0; i<n; i++)
        // {
            ans = max(ans, solve(0, -1, nums, dp));
        // }
        return ans;
    }
};