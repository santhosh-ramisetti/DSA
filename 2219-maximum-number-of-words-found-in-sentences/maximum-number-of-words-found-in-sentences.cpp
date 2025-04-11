class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int n=s.size();
        int maxx=-1;
        for(int i=0;i<n;i++)
        {
            string k=s[i];
            int c=0;
            for(int j=0;j<k.size();j++)
            {
                if(k[j]==' ')
                {
                    c++;
                }
            }
            maxx=max(maxx,c+1);
        }
        return maxx;
        
    }
};