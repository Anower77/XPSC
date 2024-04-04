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
        ll n,q; cin>>n>>q;
        vector<ll> a(n+1, 0);
        for(int i=1; i<=n; i++) cin>>a[i];

        vector<ll> pre(n+1, 0); 
        for(int i=1; i<=n; i++) pre[i]=pre[i-1]+a[i];

        while(q--)
        {
            ll l,r,k; cin>>l>>r>>k;

            ll sum=pre[n];
            sum-=(pre[r]-pre[l-1]);
            sum+=((r-l+1LL)*k);
            
            if(sum%2LL == 1LL)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }

    }



    return 0;
}