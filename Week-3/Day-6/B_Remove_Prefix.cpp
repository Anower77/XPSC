#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t;
    while(t--)
    {
        ll n;  cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        map<ll,ll> mp;
        int ans= 0;
        for(int i=n-1; i>=0; i--)
        {
            if(mp[a[i]] == 0) ans++;
            else break;
            
            mp[a[i]]++;
        }       

        cout<<n-ans<<'\n';
    }

    return 0;
}
