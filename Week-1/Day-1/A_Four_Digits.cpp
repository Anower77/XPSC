#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin>>n;
    string s = to_string(n);
    while(s.length()<4) s= '0'+ s;

    cout<<s<<'\n';

    return 0;
}
