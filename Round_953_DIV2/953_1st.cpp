#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
#define MOD 1000000007
 
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    int t ; 
    cin>>t ; 

    while(t--){
        ll n ; 
        cin>>n ; 
        vector<ll>a(n) ; 
        for(ll i=0 ; i<n ; i++){
            cin>>a[i] ; 
        }

        ll one = a[n-1] ; 
        
        ll second = 0 ; 

        for(int i=0 ; i <n-1 ; i++){
            second = max(second,a[i]) ; 
        }

        ll ans = one + second ; 

        cout<<ans<<"\n" ; 

    }

    return 0 ; 
}