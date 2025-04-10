class Solution {
public:
    int count(int n)
    {
        int s=0;
        while(n)
        {
            int r=n%10;
            s+=r;
            n=n/10;
        }
        return s;
    }
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int s=0,s1=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            s1+=count(nums[i]);
        }
        return s-s1;
    }
};