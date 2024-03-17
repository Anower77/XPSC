#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() {
    int t; cin>>t;

    for (int i =0; i<t; i++) 
    {
        string ticket; cin>>ticket;

        int firstSum = 0;
        int secondSum = 0;

        for (int j=0; j<3; j++)
        {
            firstSum += ticket[j] - '0';
        }

        for (int j=3; j<6; j++) 
        {
            secondSum += ticket[j] - '0';
        }

        if (firstSum == secondSum) 
        {
            cout << "YES" <<'\n';
        } 
        else 
        {
            cout << "NO" <<'\n';
        }
    }

    return 0;
}
