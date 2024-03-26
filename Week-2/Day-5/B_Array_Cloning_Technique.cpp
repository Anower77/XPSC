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
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        map<int, int> freq;
        for(int i=0; i<n; i++) freq[a[i]]++;

        int x =0;
        for(auto i : freq)
        {
            x = max(x, i.second);
        }

        int ans=0;
        while(x<n)
        {
            int rem = n-x;
            int add = x;
            ans++;
            ans += min(add, rem);
            x += min(add, rem);
        }

        cout<< ans<<'\n';
    }   



    return 0;
}