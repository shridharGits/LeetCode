class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int ans = 0;
        map<char,int> m;
        for(int i = 0; i<tasks.size(); i++)
        {
            m[tasks[i]]++;
        }
        priority_queue<int> q;
        int totalTasks = 0;
        for(auto it: m)
        {
            q.push(it.second);
            totalTasks+=it.second;
        }
        int c = 1;
        int t = q.top();
        q.pop();
        while(!q.empty() && q.top() == t)
        {
            q.pop();
            c++;
        }
        int intervalsTakenByMajorityTask = t*(n+1);

        if(intervalsTakenByMajorityTask <= totalTasks)
        {
            return tasks.size();
        }
        intervalsTakenByMajorityTask -= n;
        intervalsTakenByMajorityTask+=(c-1);
        
        
        return max(intervalsTakenByMajorityTask, totalTasks);
        
    }
};