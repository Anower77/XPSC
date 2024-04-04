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
        map<int,int> freq;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        
        sort(a.begin(), a.end());

        int ans=0;
        for(int i=0; i<n; i++)
        {
            int val = a[i];
            if(freq[a[i]] != 0)
            {
                ans++;

                while(freq[val] > 0)
                {
                    freq[val]--;
                    val++;
                }
            }
        }
        cout<<ans<<'\n';
    }


    return 0;
}