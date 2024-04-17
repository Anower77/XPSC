#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() 
{
    int t; cin>>t;  
    while(t--)
    {
    	int n; cin>>n;
    	int c_two = 0;
        for (int j = 0; j < n; ++j) {
            int num;
            cin >> num;
            if (num == 2) {
                c_two++;
            }
        }

        if (c_two % 8 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    
    return 0;
}
