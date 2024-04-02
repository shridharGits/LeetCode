class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long ans = 1;
        int n = nums.size();
        int left = 0;
        int right = 1;
        while(left<n && right<n)
        {
            if(nums[right-1] == nums[right])
            {
                left = right;
                ans++;
            }
            else ans+=(right-left+1);
            right++;
        }
        return ans;
    }
};