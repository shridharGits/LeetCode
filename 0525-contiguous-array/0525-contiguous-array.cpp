class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        if(n == 2) return nums[0] == nums[1] ? 0 : 2;
        int sum = 0;
        int ans = 0;
        map<int,int> m;
        m[0]=0;
        for(int i = 0; i<n; i++)
        {
            sum+= (nums[i] == 1) ? 1 : -1;
            // cout<<sum<<"->"<<iendl;
            if(m.find(sum)!=m.end())
            {
                // cout<<i<<"->"<<m[sum]<<endl;
                if(sum == 0)
                {
                    ans = max(ans, i-m[sum]+1);
                }
                else ans = max(ans, i-m[sum]);
            }
            if(m.find(sum) == m.end())
            {
                m[sum] = i;
            }
        }
        return ans;
    }
};