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
        int n,m,h; cin>>n>>m>>h;
        vector<int> a(n), b(m);
        for(int i=0; i<n; i++) cin>>a[i]; 
        for(int i=0; i<m; i++) cin>>b[i];

        sort(a.begin(),a.end(), greater<int>());
        sort(b.begin(),b.end(), greater<int>());


        ll ans=0, mn=min(n,m);
        for(int i=0; i< mn; i++)
        {
            ans  += min(b[i]*1ll *h, a[i]*1ll);
        }
        cout<<ans<<'\n';

    }


    return 0;
}