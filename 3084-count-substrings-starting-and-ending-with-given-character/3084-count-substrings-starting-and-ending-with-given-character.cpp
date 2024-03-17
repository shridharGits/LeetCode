class Solution {
public:
    long long countSubstrings(string s, char c) {
        int n = s.size();
        long long ans = 0;
        long long count = 0;
        for(int i = 0; i<n; i++)
        {
            if(s[i] == c)
            {
                // cout<<count<<endl;
                ans+=(1+count);
                count++;
            }
        }
        return ans;
    }
};