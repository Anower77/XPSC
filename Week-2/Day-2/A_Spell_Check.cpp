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
        string s; cin>>s;
        string t= "Timur"; 
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s==t)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }   



    return 0;
}