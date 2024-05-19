#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;
ll cnt=0;

void solve()
{

	vector<ll> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
	ll n, tmp; cin>>n;

	vector<ll> a(n, 0), ans(50, -1);
	// for(int i=0; i<n; i++) cin>>a[i];
	

	for(int i=0; i<n; i++)
	{
		cin>>tmp;
		for(int j=0; j<v.size(); j++)
		{
			if(tmp % v[j] == 0)
			{

				if(ans[v[j]] == -1)
				{
					cnt++;
					ans[v[j]]=cnt;
				}

				a[i] = ans[v[j]];
				break;
			}			
		}

	}

	cout<< cnt <<'\n';

	for(int i=0; i<n; i++)
	{
		cout<< a[i] <<" ";
	}
	cout<<'\n';
}





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	solve();
    }


    return 0;
}