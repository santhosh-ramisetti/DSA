class Solution {
public:
    int countPairs(vector<int>& arr, int t) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int c=0;
        int l=0,r=n-1;
        while(l<r)
        {
            if(arr[l]+arr[r]<t)
            {
                c+=r-l;
                l++;
            }
            else
            {
                r--;
            }
        }
        return c;
    }
};