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
        int n,q; cin>>n>>q;
        vector<int> arr(n);
        map<int, vector<int>> idx;

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            idx[arr[i]].push_back(i);
        }

        while(q--)
        {
            int a,b; cin>>a>>b;
            if(idx[a].empty() || idx[b].empty())
            {
                cout<<"NO"<<'\n';
                continue;
            }

            if(a==b)
            {
                cout<<"YES"<<'\n';
                continue;

            }

            if(idx[a].front() <idx[b].back())
            {
                cout<<"YES"<<'\n';
            }
            else
            {
                cout<<"NO"<<'\n';
            }
        }
    }

    return 0;
}
