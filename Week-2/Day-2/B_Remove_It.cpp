#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x; cin>>n>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
        

    vector<int> ua;
    for(int i=0; i<n; i++)
    {
        if(a[i] != x)
        {
            ua.push_back(a[i]);
        }
    }

    for(int i=0; i<ua.size() ;i++)
    {
        cout<<ua[i]<<" ";
    }
    cout<<'\n';


    return 0;
}