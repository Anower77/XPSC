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
        string s; cin>>s;
        int n = s.size();

        map<char, vector<int>> m;
        for(int i=0; i<s.size(); i++)
        {
            m[s[i]].push_back(i+1);
        } 

        if(s[0] > s[n-1])
        {
            int jump=0;
            int cst = abs(s[0]-s[n-1]);

            vector<int> path;
            for(int i=0; s[0]+i>=s[n-1]; i++)
            {
                char c= s[0]+i;

                if(m.find(c) != m.end())
                {
                    for(auto v : m[c])
                    {
                        path.push_back(v);
                    }
                }
            }

            cout<<cst<<" "<<path.size()<<'\n';

            for(auto x : path)
            {
                cout<<x<<" ";
            }
            cout<<'\n';
        }

    }


    return 0;
}