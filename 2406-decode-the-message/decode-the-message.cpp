class Solution {
public:
    string decodeMessage(string k, string m) {
        int n=k.size();
        map<char,char>mp;
        char b='a';
        for (char ch : k) {
            if (ch != ' ' && mp.find(ch) == mp.end()) {
                mp[ch] = b++;
            }
        }
        string a="";
        for(int i=0;i<m.size();i++)
        {
            if(m[i]==' ')
            {
                a+=" ";
            }
            else
            {
                a+=mp[m[i]];
            }
        }
        return a;
    }
};