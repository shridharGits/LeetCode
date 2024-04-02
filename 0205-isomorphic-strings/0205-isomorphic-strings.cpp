class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<char,char> m;
        map<char,char> p;
        for(int i = 0; i<s.length(); i++)
        {
            if(m.find(s[i])!=m.end() && m[s[i]]!=t[i]) return false;
            if(p.find(t[i])!=p.end() && p[t[i]]!=s[i]) return false;
            m[s[i]] = t[i];
            p[t[i]] = s[i];
            
        }
        return true;
    }
};