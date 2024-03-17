class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& t) {
        vector<vector<int>> ans;
        int n = nums.size();
        bool f = true;
        for(int i = 0; i<n; i++)
        {
            // cout<<i<<endl;
            if(f && nums[i][0] >= t[1])
            {
                if(nums[i][0] == t[1])
                {
                    int first = min(nums[i][0], t[0]);
                    int second = max(nums[i][1], t[1]);
                    ans.push_back({first, second});
                }
                else{
                    ans.push_back(t);
                    ans.push_back(nums[i]);
                }
                f = false;
            }
            else if(nums[i][1] >= t[0] && f)
            {
                int first = min(nums[i][0], t[0]);
                int second = max(nums[i][1], t[1]);
                ans.push_back({first, second});
                f = false;
            }
            else if(i>0 && ans[ans.size()-1][1]>=nums[i][0])
            {
                // cout<<i<<endl;
                ans[ans.size()-1][0] = min(ans[ans.size()-1][0], nums[i][0]);
                ans[ans.size()-1][1] = max(ans[ans.size()-1][1], nums[i][1]);
                // ans.push_back({first, second});
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        if(f) ans.push_back(t);
        return ans;
    }
};