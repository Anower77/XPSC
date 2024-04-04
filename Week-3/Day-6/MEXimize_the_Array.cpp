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
        for(int i=0; i<n; i++) cin>>a[i];

        sort(a.begin(), a.end());
        int ans=0;
        for(int i=0; i<n; i++)
        {
            ans += abs(i-a[i]);
        }
        cout<<ans<<'\n';
    }


    return 0;
}