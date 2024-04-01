class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        bool hasSpacePassed = true;
        int ans = 0;
        for(int i = n-1; i>=0; i--)
        {
            if(ans > 0 && s[i] == ' ')
            {
                return ans;
            }
            else if(s[i]!= ' ')
            {
                ans++;
            }
        }
        return ans;
    }
};