class Solution {
public:
    int pivotInteger(int n) {
        int sum = (n*(n+1))/2;
        for(int i = 1; i<=n; i++)
        {
            int sum1 = (i*(i+1))/2;
            int sum2 = sum-sum1+i;
            // cout<<sum1<<" : "<<sum2<<endl;
            if(sum1 == sum2) return i;
        }
        return -1;
        
        // 36-21 = 15+6
    }
};