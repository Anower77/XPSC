#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int a[n-1];

    for(int i=0;i<n; i++) cin>>a[i];
    sort(a,a+n-1);
    int x=0;

    for(int i=0; i<n; i++)
    {
        if(a[i] != i+1)
        {
            x = i+1;
            break;
        }
    }
    
    if(x==0) x=n;
    cout<<x<<'\n';

    return 0;
}
