#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--) 
    {
        string a,b; cin>>a>>b;
        char c1,c2;
        int x1=0, x2=0;

        for(int i=0; i<a.size(); i++)
        {
            if(a[i]!='X') c1=a[i];
            else x1++;
        } 


        for(int i=0; i<b.size(); i++)
        {
            if(b[i]!='X') c2=b[i];
            else x2++;
        }
        
 
        if(c1==c2)
        {
            if(x1==x2 || c1=='M')
            {
                cout<<"="<<'\n';
                continue;
            }
            if(c1=='S')
            {
                if(x1>x2) cout<<"<"<<'\n';
                else cout<<">"<<'\n';               
            }
            else if(c1=='L')
            {
                if(x1>x2) cout<<">"<<'\n';                
                else cout<<"<"<<'\n';              
            }
            continue;
        }


        if(c1=='S')
        {
            cout<<"<"<<'\n';
        }
        else if(c1=='M' && c2=='S')
        {
            cout<<">"<<'\n';
        }
        else if(c1=='M' && c2=='L')
        {
            cout<<"<"<<'\n';
        }
        else if(c1=='L')
        {
            cout<<">"<<'\n';
        }
    }

    return 0;
}