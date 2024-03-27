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
        int n,k; cin>>n>>k;
        string s; cin>>s;


        map<char, int> freq;
        for(int i=0; i<n; i++) freq[s[i]]++;

        int cnt=0;
        for(auto i: freq)
        {
            if(i.second%2 != 0 ) cnt++;
        }

        if(cnt < 0) cnt=0;
        else cnt = cnt-1;

        if(k>= cnt && k<=n)
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