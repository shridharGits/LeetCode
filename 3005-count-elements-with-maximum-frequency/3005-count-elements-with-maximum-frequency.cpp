class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> m;
        int n = nums.size();
        for(int i = 0; i<n; i++)
        {
            m[nums[i]]++;
        }
        int mx = 0;
        int c = 0;
        for(auto it: m)
        {
            mx = max(mx, it.second);
        }
        int ans= 0;
        for(auto it: m)
        {
            if(it.second == mx)
            {
                ans+=mx;
            }
        }
        return ans;
    }
};