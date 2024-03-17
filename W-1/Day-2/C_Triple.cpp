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

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }


        // map<int,int> freq;
        unordered_map<int,int> freq;
        for(int num: a)
        {
            freq[num]++;
        }


        bool flag= false;
        for(auto p: freq)
        {
           if(p.second >= 3)
           {
                cout<<p.first<<'\n';
                flag=true;
                break;

           }
        }


        if(!flag) cout<<-1<<'\n';

    }

    return 0;
}
