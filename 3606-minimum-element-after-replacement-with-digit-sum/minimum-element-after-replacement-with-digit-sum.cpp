class Solution {
public:
    int minElement(vector<int>& nums) {
        int minn=100000000;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int k=nums[i];
            int s=0;
            while(k)
            {
                int r=k%10;
                s+=r;
                k=k/10;
            }
            minn=min(s,minn);
            s=0;
        }
        return minn;
    }
};