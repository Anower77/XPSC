#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin>>a[i];

        ll ans=0;
        priority_queue<ll> pq;
        for(ll i=0; i<n; i++)
        {
            if(a[i]> 0)
            {
                pq.push(a[i]);
            }
            else
            {
                if(!pq.empty())
                {
                    ans+=pq.top();
                    pq.pop();
                }
            }
        }
        cout<<ans<<'\n';
    }


    return 0;
}