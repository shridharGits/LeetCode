class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int miInd = 0;
        int mxInd = 0;
        int mi=INT_MAX;
        int mx=INT_MIN;
        
        long long ans = 0;
        while(right<n && left<n)
        {
            if(nums[right] == minK)
            {
                miInd = right;
                mi = nums[right];
            }
            if(nums[right] == maxK)
            {
                mxInd = right;
                mx = nums[right];
            }
            
            if(nums[right]<minK || nums[right] > maxK)
            {
                mi=INT_MAX;
                mx=INT_MIN;
                left = right+1;
            }
            if(mi == minK && mx == maxK)
            {
                int minInd = min(miInd, mxInd);
                ans+=(minInd-left+1);
                
            }
            right++;
        }
        return ans;
    }
};