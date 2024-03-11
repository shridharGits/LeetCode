class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        
        priority_queue<pair<int,int>> q;
        q.push({points[0][0], points[0][1]});
        int i = 1;
        while(i<points.size())
        {
            if(q.top().second >= points[i][0])
            {
                // cout<<"hey";
                auto it = q.top();
                q.pop();
                
                q.push({points[i][0], min(it.second, points[i][1])});
            }
            else q.push({points[i][0], points[i][1]});
            i++;
        }
        return q.size();
    }
};