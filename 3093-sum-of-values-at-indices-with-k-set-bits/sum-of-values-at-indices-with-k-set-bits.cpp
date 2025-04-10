class Solution {
public:
    int count(int n)
    {
        int c=0;
        while(n)
        {
            if(n&1)
            {
                c++;
            }
            n=n>>1;
        }
        return c;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            int m=count(i);
            if(m==k)
            {
                s+=nums[i];
            }
        }
        return s;
    }
};