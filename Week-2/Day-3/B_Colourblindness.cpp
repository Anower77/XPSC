#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string a,b; cin>>a>>b;

        for(int i=0; i<n; i++)
        {
            if(a[i]== 'B') a[i]='G';
            if(b[i]== 'B') b[i]='G';
        }


        if(a==b) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }   



    return 0;
}