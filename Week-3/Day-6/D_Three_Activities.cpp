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
        int n, res=0; cin>>n;
        
        vector<int> a(n),b(n),c(n);
        vector<pair<int,int>> va,vb,vc;
        
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            va.push_back({a[i],i});
        }
        
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            vb.push_back({b[i],i});
        }
        
        for(int i=0; i<n; i++)
        {
            cin>>c[i];
            vc.push_back({c[i],i});
        }


        sort(va.begin(), va.end(), greater<>());
        sort(vb.begin(), vb.end(), greater<>());
        sort(vc.begin(), vc.end(), greater<>());
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                for(int k=0; k<3; k++)
                {
                    if(va[i].second != vb[j].second && va[i].second != vc[k].second &&  vb[j].second!=vc[k].second)
                    {
                        res = max(va[i].first+vb[j].first+vc[k].first, res);
                    }
                }
            }
        }
        cout<<res<<'\n';
    }


    return 0;
}