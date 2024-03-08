class Solution {
public:
    bool static cmp(string a, string b)
    {
        if(a.length() == b.length())
        {
            return a<b;
        }
        return a.length()<b.length();
        
    }
    string kthLargestNumber(vector<string>& nums, int k) {
        
        // priority_queue<string, vector<string>, greater<string>> q;
        int n = nums.size();
        // int i = 1;
        // int ans = 0;
        // q.push(nums[0]);
        // while(i<n)
        // {
        //     // if(q.size()>k-1) q.pop();
        //     q.push(nums[i]);
        //     i++;
        // }
        // i = 0;
        // while(!q.empty())
        // {
        //     nums[i] = q.top();
        //     i++;
        //     q.pop();
        // }
        sort(nums.begin(), nums.end(), cmp);
        return nums[n-k];
    }
};