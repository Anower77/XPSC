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
        ll n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        ll sum=0, op=0;
        bool flag=false;
        for(int i=0; i<=n; i++)
        {
            if(i<n)
            {
                sum+= abs(a[i]);

            }
            if(flag)
            {
                if(i==n || a[i]>0)
                {
                    op++;
                    flag=false;
                }
            }
            else
            {
                if(a[i]<0) flag=true;               
            }
        }
        cout<<sum<<" "<<op<<'\n';
    }


    return 0;
}