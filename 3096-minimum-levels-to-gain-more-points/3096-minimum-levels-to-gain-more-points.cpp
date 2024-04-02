class Solution {
public:
    int minimumLevels(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i<n; i++)
        {
            sum += nums[i] == 0 ? -1 : 1;
        }
        int ans = 0;
        int d = 0;
        for(int i = 0; i<n-1; i++)
        {
            d += nums[i] == 0 ? -1 : 1;
            int bob = sum-d;
            if(d>bob) return i+1;
        }
        return -1;
    }
};