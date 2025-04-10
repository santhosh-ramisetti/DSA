class Solution {
public:
    void minn(vector<int>&arr,int m)
    {
        int mn=1000000;
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]<mn)
            {
                ans=i;
                mn=arr[i];
            }
        }
        arr[ans]=arr[ans]*m;

    }
    vector<int> getFinalState(vector<int>&arr, int s, int m) {
        int n=arr.size();
        while(s--)
        {
            minn(arr,m);
        }
        return arr;
        
    }
};