class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mi = INT_MAX;
        int mx = INT_MIN;
        for(int i = 0; i<n; i++)
        {
            mi = min(mi, nums[i]);
            mx = max(mx, nums[i]);
        }
        int ans = 0;
        for(int i = 1; i<=mi; i++)
        {
            if(mx%i == 0 && mi%i == 0)
            {
                ans = max(ans, i);
            }
        }
        return ans;
    }
};