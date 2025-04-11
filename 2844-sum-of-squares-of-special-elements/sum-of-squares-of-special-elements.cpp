class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        for(int i=1;i<=nums.size();i++)
        {
            int k=nums[i-1];
            if(n%i==0)
            {
                s+=(k*k);
            }
        }

        return s;
    }

};