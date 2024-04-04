#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t; cin>>t;
    // while(t--)
    // {
        int n; cin>>n;
        stack<string> s;
        for(int i=0; i< n; i++)
        {
            string pro; cin>>pro;
            s.push(pro);
        } 

        set<string> a;
        while(!s.empty())
        {
            if(a.find(s.top()) == a.end())
            {
                a.insert(s.top());
                string pro= s.top();

                if(pro.size() > 2)
                {
                    cout << pro[pro.size()-2] << pro[pro.size()-1] ;
                }
                else
                {
                    cout << pro << " ";
                }
            }
            s.pop();
        }
        cout << "\n";
    
    return 0;
}
