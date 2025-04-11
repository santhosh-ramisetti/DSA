class Solution {
public:
    string reversePrefix(string w, char ch) {
        int ind=-1;
        int n=w.size();
        string a=w;
        for(int i=0;i<n;i++)
        {
            if(w[i]==ch)
            {
                ind=i;
                break;
            }
        }
        if(ind==-1)
        {
            return w;
        }
        int l=0,r=ind;
        while(l<r)
        {
            a[l]=w[r];
            a[r]=w[l];
           
            l++;
            r--;
        }
        return a;

    }
};