#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,cnt=0; cin>>a>>b;
    for(int i=a; i<=b; i++) cnt++;
    cout<<cnt<<'\n';

    return 0;
}
