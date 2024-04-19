#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() 
{
    int t; cin>>t;  
    while(t--)
    {
        int n, ans=0; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            ans^=a[i];
        }

        if(n%2==0)
        {
            if(ans==0) cout<<0<<'\n';
            else cout<<-1<<'\n';
        }
        else
        {
            cout<<ans<<'\n';
        }
    }

    
    return 0;
}
