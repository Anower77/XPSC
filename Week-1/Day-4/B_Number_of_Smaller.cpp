#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m; cin>>n>>m;
    vector<int> a(n), b(m);

    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    // sort(a.begin(), a.end());


    for(int i=0; i<m; i++)
    {
        ll l=0, r=n-1, ans=-1;
        while(l<=r)
        {
            ll mid = l+(r-l)/2;
            if(a[mid] < b[i])
            {
                ans=mid;
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        cout<<ans+1<<" ";
    }

    
    return 0;
}
