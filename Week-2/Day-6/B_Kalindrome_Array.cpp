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
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        int i=0, j=n-1;
        bool flag = false;
        int a_val,b_val;

        while(i<j)
        {
            if(a[i] != a[j])
            {
                flag =true;
                a_val = a[i];
                b_val = a[j];
                break;
            }
            i++,j--;
        }


        if(!flag) 
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            vector<int> v1,v2;
            for(int i=0; i<n; i++)
            {
                if(a[i] != a_val) v1.push_back(a[i]);
                if(a[i] != b_val) v2.push_back(a[i]);
            }
            

            bool flag1 = true, flag2= true;
            


            int sv1 =v1.size(), sv2 = v2.size();
            for(int i=0; i<sv1/2; i++)
            {
                if(v1[i] != v1[sv1 -1 -i])
                {
                    flag1 =false;
                    break;
                };
            }


            for(int i=0; i<sv2/2; i++)
            {
                if(v2[i] != v2[sv2 -1 -i])
                {
                    flag2 =false;
                    break;
                };
            }

            if(flag1 || flag2)
            {
                cout<<"YES"<<'\n';
            }
            else
            {
                cout<<"NO"<<'\n';
            }
        }

       
    }
    return 0;
}
