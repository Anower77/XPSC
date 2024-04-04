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

        string m = "meow";
        for(int i=0; i<n; i++)
        {
            if(s[i] <= 90) s[i]+=32;
        }

        string ss="";

        for(int i=0; i<n; i++)
        {
            if(ss.empty() || ss.back() != s[i])
            {
                ss.push_back(s[i]);
            }
        }

        if(m==ss)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }



    return 0;
}