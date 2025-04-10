class Solution {
public:
    vector<int> stableMountains(vector<int>& h, int t) {
        vector<int>vet;
        int n=h.size();
        for(int i=1;i<n;i++)
        {
            if(h[i-1]>t)
            {
                vet.push_back(i);
            }
        }
        return vet;

    }
};