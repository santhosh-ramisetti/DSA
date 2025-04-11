class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        int b=0;
        string a="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                if(b>0)
                {
                    a+=s[i];
                }
                b++;
            }
            else
            {
                b--;
                if(b>0)
                {
                    a+=s[i];
                }
            }
        }
        return a;

    }
};