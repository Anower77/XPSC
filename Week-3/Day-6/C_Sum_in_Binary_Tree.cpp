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
        ll n, ans=0; cin>>n;
        while(n!=0)
        {
            ans+=n;
            n/=2;
        }
        cout<<ans<<'\n';
    }


    return 0;
}