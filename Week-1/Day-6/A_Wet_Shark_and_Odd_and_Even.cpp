#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;
    ll a[n];
    ll sum = 0, odd = INT_MAX;
    
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        sum +=a[i];
        if (a[i]%2 != 0)
        {
            odd = min(odd, a[i]);
        }
    }

    if (sum%2 != 0) sum -= odd;
    cout << sum << '\n';
    return 0;
}
