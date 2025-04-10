class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string k="";
        for(int i=0;i<words.size();i++)
        {
            k+=words[i][0];
        }
        if(s==k)
        return true;
        return false;
        
    }
};