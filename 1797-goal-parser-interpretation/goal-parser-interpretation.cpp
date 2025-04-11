class Solution {
public:
    string interpret(string s) {
        string a="";
        int i=0;
        int n=s.size();
        while(i<n)
        {
            if(s[i]=='G')
            {
                a+="G";
                i++;
            }
            else if(s[i]=='(' and s[i+1]==')')
            {
                a+="o";
                i+=2;
            }
            else if(s[i]=='(' and s[i+1]=='a')
            {
                a+="al";
                i+=4;
            }
        }
        return a;
        
    }
};