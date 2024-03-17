#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() {
    int t; cin>>t;
    
    while(t--)
    {
        int n; cin>>n;
        vector<int> a(n);
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum += a[i];
        }


        sort(a.begin(), a.end());

        int minCan = a[0]* n;
        int minEat =0;
        

        for(int i=1; i<n; i++)
        {
            minCan += a[i];
            minEat += a[i]-a[0];
        }

        cout<< minEat<<'\n';
    }

    return 0;
}
