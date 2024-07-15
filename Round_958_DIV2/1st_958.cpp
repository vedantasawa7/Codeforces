#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
#define MOD 1000000007

 
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;

    ll t ; 
    cin>>t ; 

    while(t--){
        ll n,k ; 
        cin>>n>>k ; 

        ll ans = 0 ; 

        if(n==1){
            cout<<0<<endl ; 
            continue ;
        }

        ll m = k -1 ; 

        while(n>1){
            n = n - m ; 
            ans++ ; 
        }
        
        cout<<ans<<endl ;


    }

    return 0 ; 
}