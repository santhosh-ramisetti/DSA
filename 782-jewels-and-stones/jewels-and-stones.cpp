class Solution {
public:
    int numJewelsInStones(string je, string s) {
        int n=je.size();
        int m=s.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(je[i]==s[j])
                {
                    c++;
                }
            }
        }
        return c;
    }
};