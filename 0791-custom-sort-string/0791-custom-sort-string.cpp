class Solution {
public:
    string customSortString(string order, string s) {
        int n = s.length();
        map<int,int> m;
        for(int i = 0; i<n; i++)
        {
            m[s[i]]++;
        }
        string ans = "";
        for(int i = 0; i<order.length(); i++)
        {
            string a(m[order[i]], order[i]);
            ans+=a;
            m.erase(order[i]);
        }
        
        for(auto it: m)
        {
            string a(it.second, it.first);
            ans+=a;
            m.erase(it.first);
        }
        
        return ans;
    }
};