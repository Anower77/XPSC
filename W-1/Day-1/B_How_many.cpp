#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll s,t,cnt=0; cin>>s>>t;

    for(int a=0; a<=s; a++)
    {
        for(int b=0; b<=s-a; b++)
        {
            for(int c=0; c<=s-a-b; c++)
            {
                if(a*b*c <=t)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<'\n';

    return 0;
}
