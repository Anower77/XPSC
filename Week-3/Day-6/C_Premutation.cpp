#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<vector<int>> mat(n+5, vector<int>(n));
        map<int, pair<int,int>> mp;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<n; j++)
            {
                cin>>mat[i][j];
            }
        }



        for(int i=1; i<=n; i++)
        {
            int le =mat[i][n-1];
            if(mp.find(le) == mp.end())
            {
                mp[le]= {i,1};
            }
            else
            {
                mp[le].second++;
            }
        }

        int idx =0, val;
        for(auto u:mp)
        {
            if(u.second.second ==1) idx = u.first;
            else val= u.first;
            
        }

        for(int i=1; i<n; i++)
        {
            cout<<mat[mp[idx].first][i]<<" ";
        }
        cout<<val<<'\n';
    }



    return 0;
}