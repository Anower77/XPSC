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
        string s; cin>>s;
        vector<ll> a;
        ll total=0, min =0;

        for(ll i=0; i<n; i++)
        {
            ll L=i;
            ll R=n-i-1;
            if(s[i] == 'L')
            {
                if(R>L)
                {
                    min++;
                    total+=R;
                    a.push_back(R-L);
                }
                else
                {
                    total+=L;
                }
            }
            else
            {
                if(L>R)
                {
                    min++;
                    a.push_back(L-R);
                    total+=L;
                }
                else
                {
                    total+=R;
                }
            }
        }
    
        vector<ll> ans(n+1);
        for(ll i=min; i<=n; i++) ans[i]=total;
        sort(a.begin(), a.end(), greater<ll>());

        for(ll i=min-1; i>=1; i--)
        {
            total-=a.back();
            a.pop_back();
            ans[i]=total;
        }
        for(ll i=1; i<=n; i++) cout<<ans[i]<<" ";
        cout<<'\n';
    }



    return 0;
}