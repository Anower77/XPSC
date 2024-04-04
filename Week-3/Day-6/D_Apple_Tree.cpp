#include<bits/stdc++.h>
#define ll long long 
using namespace std;

const int N = 1e6+5;
typedef pair<int, int> ii; 

vector<ii> adj[N];
vector<ll> leaf;

// DFS
void DFS(int c, int p)
{
    bool child = false;
    for(auto i : adj[c])
    {
        if(i.first == p) continue;
        child = true;
        DFS(i.first, c);
        leaf[c] += leaf[i.first];
    }

    if(!child) leaf[c] = 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; 
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            adj[i].clear();
        }
        leaf.assign(n+2,0);

        for(int i=1; i <=n-1; i++)
        {
            int u,v; cin>>u>>v;
            adj[u].push_back({v, 0}); 
            adj[v].push_back({u, 0});
        }

        DFS(1,-1);
        ll q; cin>>q;
        while(q--)
        {
            int x,y; cin>>x>>y;
            ll ans = leaf[x] * leaf[y];
            cout << ans << '\n';
        }
    }

    return 0;
}
