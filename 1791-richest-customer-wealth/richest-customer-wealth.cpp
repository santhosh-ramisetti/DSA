class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        int maxx=-1;
        for(int i=0;i<n;i++)
        {
            int s=0;
            for(int j=0;j<m;j++)
            {
                s+=arr[i][j];
            }
            maxx=max(s,maxx);
        }
        return maxx;
        
    }
};