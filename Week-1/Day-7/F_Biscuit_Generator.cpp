#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,t,TB=0; cin>>a>>b>>t; 
    for(int i=a; i<=t+0.5; i+=a) TB += b;
    cout<<TB<<'\n';
    
    return 0;
}
