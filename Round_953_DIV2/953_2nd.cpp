#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;
        ll ans = 0;

        if(b<=a){
            ans = a*n ; 
        }
        else if(b-a > n ){
            ll k = b - n ; 
            ans = b*(b+1)/2 - k*(k+1)/2 ; 
        }
        else {
            ll k = b - a ; 
            ll l = n - k ; 

            ans = b*(b+1)/2 - a*(a+1)/2 ; 
            
            ans = ans  + l * a ; 
        }

        cout << ans << "\n";
    }

    return 0;
}
