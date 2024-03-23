#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,c; cin>>a>>b>>c;
        if(a+b == c)
        {
            cout<<"+"<<'\n';
        }
        else
        {
            cout<<"-"<<'\n';
        }

    }
  


    return 0;
}