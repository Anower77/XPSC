#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() 
{
    int t; cin >> t;

    while (t--) 
    {
        int n; cin>>n;
        string x,s; cin>>x>>s;
        
        s +=s;
        bool flag = false;
        int cnt=0, res=0;

        if(x[0] == 'g')
        {
            cout<<0<<'\n';
            continue;
        }
    
        // then
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'g')
            {
                res= max(res, cnt);
                flag = false;
            }

            if(s[i] == x[0] && flag==false)
            {
                flag =true;
                cnt=0;
            }

            if(flag) cnt++;
        }

        cout<<res<<'\n';


    }


    return 0;
}
