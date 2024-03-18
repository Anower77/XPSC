#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const ll N = 1e5+5;


int main() {
    int t; cin>>t;

    for (int i=0; i<t; i++) 
    {
        int rating; cin>>rating;

        if (rating >= 1900) 
        {
            cout << "Division 1" << '\n';
        } 
        else if (rating >= 1600 && rating <= 1899) 
        {
            cout << "Division 2" << '\n';
        } 
        else if (rating >= 1400 && rating <= 1599) 
        {
            cout << "Division 3" << '\n';
        } 
        else 
        {
            cout << "Division 4" << '\n';
        }
    }

    return 0;
}
