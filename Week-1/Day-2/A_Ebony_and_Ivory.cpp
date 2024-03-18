#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() 
{
    int a,b,c; cin>>a>>b>>c;

    for (int i = 0; i<= c/a; i++)
    {
        if ((c - i*a) % b == 0) 
        {
            cout << "Yes"<<'\n';
            return 0;
        }
    }

    cout << "No"<<'\n';
    return 0;
}
