class Solution {
public:
    bool palin(string s)
    {
        int n=s.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            if(palin(words[i]))
            {
                return words[i];
            }
        }
        return "";

    }
};