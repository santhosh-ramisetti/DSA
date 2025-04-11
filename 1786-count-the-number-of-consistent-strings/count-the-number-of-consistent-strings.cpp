class Solution {
public:
    int countConsistentStrings(string all, vector<string>& w) {
        int n=w.size();
        map<char,int>mp;
        int c=0;
        for(int i=0;i<all.size();i++)
        {
            mp[all[i]]++;
        }
        for(int i=0;i<w.size();i++)
        {
            string k=w[i];
            int f=0;
            for(int j=0;j<k.size();j++)
            {
                if(mp.find(k[j])==mp.end())
                {
                    f=0;
                    break;
                }
                else
                {
                    f=1;
                }
            }
            if(f==1)
            {
                c++;
            }
        }
        return c;
    }
};