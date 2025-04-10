class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>&arr, int m) {
        int n=arr.size();
        vector<bool>vet(n);
        int maxx=-1;
        for(int i=0;i<n;i++)
        {
            maxx=max(arr[i],maxx);
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]+m>=maxx)
            {
                vet[i]=true;
            }
            else
            {
                vet[i]=false;
            }
        }
        return vet;
        
    }
};