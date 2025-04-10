class Solution {
public:
    int numberOfPairs(vector<int>& n1, vector<int>& n2, int k) {
        int n=n1.size();
        int m=n2.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int a=n2[j]*k;
                if(n1[i]%a==0)
                {   
                    c++;
                }
            }
        }
        return c;
        
    }
};