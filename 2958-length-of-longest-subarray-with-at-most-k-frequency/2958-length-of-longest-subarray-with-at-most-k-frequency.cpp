class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int> m;
        int n = nums.size();
        int right = 0;
        int left = 0;
        int ans = 0;
        while(right<n)
        {
            m[nums[right]]++;
            while(m[nums[right]]>k)
            {
                m[nums[left]]--;
                left++;
            }
            
            // cout<<m[nums[right]]<<endl;
            ans = max(ans, right-left+1);
            right++;
        }
        return ans;
    }
};