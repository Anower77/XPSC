#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--)
    {
        ll n, k, q; 
        cin >> n >> k >> q;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        ll ans =0,cons=0,maxo=0,cnt=0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] <= q)
            {
                cons++;
                maxo = max(maxo, a[i]);
            }
            else
            {
                if(cons >= k)
                {
                    ll x = cons - k + 1;
                    ll y = (x * (x + 1)) / 2;
                    ans += y;
                }
                cons=0;
                maxo=0;
                if(a[i] <= q)
                {
                    maxo = a[i];
                    cnt = 1;
                }
            }
        }
        if(cons >= k)
        {
            ll x = cons - k + 1;
            ll y = (x * (x + 1)) / 2;
            ans += y;
        }
        cout << ans << '\n';
    }
    return 0;
}
