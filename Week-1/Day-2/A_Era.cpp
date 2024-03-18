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
        vector<int> a(n);
        for(int i=0;i<n; i++)
        {
            cin>>a[i];
        }


        int opera = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i] > (i+1))
            {
                opera = max(opera, a[i] - (i+1));
            }
        }
        cout<<opera<<'\n';
        
    }



    return 0;
}


// ll n; cin>>n;
// ll a[n+3];
// for(int i=1; i<=n; i++) cin>>a[i];

// ll ans = a[1]-1;
// ll idx = ans;

// for(int i=2; i<=n; i++)
// {
//     if(idx+i < a[i])
//     {
//         ll x= a[i]- (idx+i);
//         idx += x;
//         ans += x;
//     }
// }
// cout<<ans<<'\n';