class Solution {
public:
    vector<int> leftRightDifference(vector<int>&arr) {
        int n=arr.size();
        vector<int>left(n);
        vector<int>right(n);
        left[0]=0;
        int k=0;
        for(int i=0;i<n-1;i++)
        {
            k+=arr[i];
            left[i+1]=k;
        }  
        int s=0;
        right[n-1]=0;
        for(int i=n-1;i>0;i--)
        {
            s+=arr[i];
            right[i-1]=s;
        } 
        vector<int>vet(n);
        for(int i=0;i<n;i++)
        {
            vet[i]=abs(left[i]-right[i]);
        }
        return vet;
    }
};