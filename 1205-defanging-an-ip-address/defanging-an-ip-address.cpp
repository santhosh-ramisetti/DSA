class Solution {
public:
    string defangIPaddr(string s) {
        string a="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                a+="[.]";
            }
            else
            {
                a+=s[i];
            }
        }
        return a;

    }
};