class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& c) {
        vector<vector<int>>vet;
        int k=0;
        for(int i=0;i<n;i++)
        {
            vector<int>v;
            for(int j=0;j<n;j++)
            {
                v.push_back(k);
                k++;
            }
            vet.push_back(v);
        }
        int a=0,b=0;
        int ans=vet[a][b];
        for(int i=0;i<c.size();i++)
        {
            if(c[i]=="UP")
            {
                a=a-1;
            }
            else if(c[i]=="DOWN")
            {
                a=a+1;
            }
            else if(c[i]=="LEFT")
            {
                b=b-1;
            }
            else
            {
                b=b+1;
            }
        }
        return vet[a][b];
    }
};