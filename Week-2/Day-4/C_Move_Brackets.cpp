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

        int n,cnt=0; cin>>n;
        string s; cin>>s;

        for(int i=0; i<n; i++)
        {
            if(s[i] == ')' and cnt) cnt--;
            if(s[i] == '(') cnt++;
        }
        cout<<cnt<<'\n';
    }   



    return 0;
}