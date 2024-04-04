class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int n = s.length();
        stack<int> st;
        int c = 0;
        for(int i = 0; i<n; i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                c++;
            }
            else if(!st.empty() && s[i]==')')
            {
                st.pop();
                c--;
            }
            ans = max(ans, c);
        }
        return ans;
    }
};