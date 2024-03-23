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
        int n,m; cin>>n>>m;
        string a[n];
        int ans = INT_MAX,dis;

        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int sum=0;
                for(int k=0; k<m; k++)
                {
                    dis = abs(a[i][k] - a[j][k]);
                    sum += dis;
                }

                if(sum < ans) ans=sum;
            }
        }

        cout<<ans<<'\n';
        
    }    



    return 0;
}