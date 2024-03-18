#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() 
{
    ll t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        map<string,int> freq;

        vector<vector<string>> s(3, vector<string>(n));

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>s[i][j];
                freq[s[i][j]]++;
            }
        }
        

        int a[3]={0};
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(freq[s[i][j]]==1)
                {
                    a[i]+=3;
                }
                else if(freq[s[i][j]]==2)
                {
                    a[i]+=1;
                }
            }
        }

        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<'\n';



    }
    return 0;
}
