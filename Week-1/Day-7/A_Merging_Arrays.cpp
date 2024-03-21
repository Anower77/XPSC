#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin>>n>>m;
    vector<int> a(n), b(m);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    // sort(a, a+n);

    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    vector<int> mer(n+m);
    int i=0,j=0, k=0;

    while(i<n && j<m)
    {
        if(a[i] <= b[j])
        {
            mer[k++]= a[i++];
        }
        else
        {
            mer[k++] = b[j++];
        }
    }

    while(i<n) mer[k++]= a[i++];

    while(j<m) mer[k++]= b[j++];


    // output
    for(int i=0; i<n+m; i++)
    {
        cout<<mer[i]<<" ";
    }


    


    return 0;
}
