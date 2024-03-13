class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b)
     {
          if (a[0] == b[0])
          {
               return a[1] > b[1];
          }
          return a[0] < b[0];
     }
    int numberOfWeakCharacters(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end(), comp);
          int mx = INT_MIN;
          int ans = 0;

          for (int i = nums.size() - 1; i >= 0; i--)
          {
               if (nums[i][1] < mx)
               {
                   ans++;
               }
               mx = max(mx, nums[i][1]);
          }
          return ans;


    }
};