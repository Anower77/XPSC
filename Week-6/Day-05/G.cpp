#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with.stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	ll n,k; cin>>n>>k;
    	
    	ll x = (k)/ (n-1);
    	if((x+k) % n == 0)
    	{
    		cout<< x + k -1<<'\n';
    	}
    	else
    	{
    		cout<< x + k<<'\n';
    	}


    }


    return 0;
}