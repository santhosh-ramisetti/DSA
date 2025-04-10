class Solution {
public:
    int largestAltitude(vector<int>&arr) {
        int n=arr.size();
        vector<int>pre(n+1);
        pre[0]=0;
        for(int i=1;i<n+1;i++)
        {
            pre[i]=pre[i-1]+arr[i-1];
        }
        int maxx=-1;
        for(int i=0;i<n+1;i++)
        {
            maxx=max(maxx,pre[i]);
        }
        return maxx;

    }
};