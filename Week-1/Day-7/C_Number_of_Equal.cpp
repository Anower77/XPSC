#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m; cin>>n>>m;
    vector<int> a(n), b(m);

    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];




    // output
    map <int ,int> cntA, cntB;
    for(int i=0; i<n; i++) cntA[a[i]]++;
    for(int i=0; i<m; i++) cntB[b[i]]++;

    ll cnt =0;
    for(auto p:cntA)
    {
        if(cntB.find(p.first) != cntB.end())
        {
            cnt += (ll)p.second * cntB[p.first];
        }
    }

    cout<<cnt <<'\n';
    

    
    return 0;
}
