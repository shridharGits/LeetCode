class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        bool hasSpacePassed = true;
        string ans;
        for(int i = n-1; i>=0; i--)
        {
            if(ans.length() > 0 && s[i] == ' ')
            {
                return ans.length();
            }
            else if(s[i]!= ' ')
            {
                ans+=s[i];   
            }
        }
        return ans.length();
    }
};