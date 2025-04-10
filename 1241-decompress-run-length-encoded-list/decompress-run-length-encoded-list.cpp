class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        vector<int>vet;
        for(int i=0;i<n;i+=2)
        {
            int f=nums[i];
            int v=nums[i+1];
            while(f--)
            {
                vet.push_back(v);
            }
        }
        return vet;
    }
};