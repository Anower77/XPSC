#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,coin; cin>>a>>b;

    if(a==b) coin=a+b;
    else coin = max(a, b);
    if(a != b) coin += max(a,b)-1; 
    cout<<coin<<'\n';

    return 0;
}
