class Solution {
public:
    string restoreString(string s, vector<int>& in) {
        string a=s;
        for(int i=0;i<in.size();i++)
        {
            a[in[i]]=s[i];
        }
        return a;
    }
};