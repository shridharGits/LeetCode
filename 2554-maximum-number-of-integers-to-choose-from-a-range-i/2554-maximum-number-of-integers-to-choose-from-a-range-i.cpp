class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        map<int,int> m;
        for(int i = 1; i<=n; i++)
        {
            m[i]++;
        }
        for(int i = 0; i<banned.size(); i++)
        {
            if(m.find(banned[i]) != m.end())
            {
                m.erase(banned[i]);
            }
        }
        int ans = 0;
        int sum = 0;
        for(auto it: m)
        {
            if(sum+it.first <= maxSum)
            {
                ans++;
                sum+=it.first;
            }
        }
        return ans;
    }
};