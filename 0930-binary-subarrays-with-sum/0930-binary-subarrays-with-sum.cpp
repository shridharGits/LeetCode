class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int sum = 0;
        int ans = 0;
        map<int,int> m;
        while(j<n)
        {
            sum+=nums[j];
            if(sum == k) ans++;
            ans+=m[sum-k];
            m[sum]++;
            j++;
        }

        return ans;
    }
    /*
    [0,0,0,0,0,0,1,0,0,0]
    0
[1,0,1,0,1]
2
[1,1,1,1,1]
5

    */
};