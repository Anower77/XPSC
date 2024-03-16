#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,c; cin>>a>>b>>c;

    for(int i=a; i<=b; i++)
    {
        if(i%c==0) 
        {
            cout<<i<<'\n';
            return 0;
        }
    }
    cout<<-1<<'\n';


    return 0;
}
