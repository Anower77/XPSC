#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x,y,cnt=1; cin>>x>>y;
    
    while(x*2<=y) 
    {
        x*=2;
        cnt++;
    }
    cout<<cnt<<'\n';

    return 0;
}
