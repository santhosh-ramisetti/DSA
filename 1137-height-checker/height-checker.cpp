class Solution {
public:
    int heightChecker(vector<int>& h) {
        int c=0,n=h.size();
        vector<int>vet=h;
        sort(vet.begin(),vet.end());
        for(int i=0;i<n;i++)
        {
            if(h[i]!=vet[i])
            {
                c++;
            }
        }
        return c;
    }
};