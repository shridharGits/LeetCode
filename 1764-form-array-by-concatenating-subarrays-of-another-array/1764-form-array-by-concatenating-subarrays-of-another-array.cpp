class Solution {
public:
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        int n=groups.size(), ns=nums.size();
        int cnt=0;
        int st=0;
        for(int x=0; x<n; x++)
        {
            int f=0;
            for(int y=st; y<ns; y++)
            {
                int i=0, j=y;
                while(i<groups[x].size() && groups[x][i]==nums[j])
                {
                    i++; j++;
                }
                if(i==groups[x].size()) 
                {
                    cnt++;
                    st=j;
                    f=1;
                    break;
                }
            }
            if(!f) return false;
        }
        if(cnt==n) return true;
        return false;
    }
};