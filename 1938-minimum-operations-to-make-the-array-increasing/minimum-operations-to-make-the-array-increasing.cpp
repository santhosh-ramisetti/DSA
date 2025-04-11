class Solution {
public:
    int minOperations(vector<int>& arr) {
        int n=arr.size();
        int s=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]>=arr[i])
            {
                int k=arr[i-1]-arr[i]+1;
                arr[i]=arr[i]+k;
                s+=k;
            }
        }
        return s;
    }
};