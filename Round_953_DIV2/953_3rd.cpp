#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

// not solved unable to solve it ...... 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n , k ; 
        cin>>n>>k ; 

        vector<ll>v(n) ; 
        for(ll i=0 ; i<n ; i++){
            v[i] = i+1 ; 
        }

        ll sum = n*(n+1)/2 ;
        if (sum > k ){
            cout<<"NO"<<"\n" ; 
        }

        
        else if ( k == 0 ){
            cout<<"YES"<<"\n" ; 
            for(int i=0 ; i<n ; i++){
                cout<<v[i]<<" " ; 
            }
            cout<<"\n" ; 
        }

        else {
            ll curr = 0 ; 

            


        }





    }

    return 0;
}
