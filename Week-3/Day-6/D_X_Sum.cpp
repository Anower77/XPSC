#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        ll n,m; cin>>n>>m;
        ll a[n][m];
        for(int i=0; i<n; i++) 
        {
            for(int j=0; j<m; j++) 
            {
                cin >> a[i][j];
            }
        } 
        
        ll ans = 0;

        for(int i=0; i<n; i++) 
        {
            for(int j=0; j<m; j++) 
            {
                ll sum = a[i][j];
                ll x = j-1, y = j+1;

                for(int k=i-1; k>=0; k--)
                {
                    if(x>=0) sum+=a[k][x], x--;
                    if(y<m) sum+=a[k][y], y++;
                }
                
                x = j-1;
                y = j+1;

                for(int k=i+1; k<n; k++) 
                {
                    if(x>=0) sum+=a[k][x], x--;
                    if(y<m) sum+=a[k][y], y++;
                }
                ans = max(ans, sum);
            }
        } 
        cout<<ans<<'\n';
    }

    return 0;
}
