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

        
        vector<ll>a(t) ; 
        for(ll i=0 ; i<t ; i++){
            cin>>a[i] ; 
        }

        vector<ll>b(t) ; 
        for(ll i=0 ; i<t ; i++){
            cin>>b[i] ; 
        }

        for(int i=0 ; i<t ; i++){

            ll ans = 1; 
            ll down = 2; 
            while(b[i]>0){
                if(b[i]%2 == 1){
                    ans = (ans * down) % MOD ; 
                }
                down = (down * down) % MOD ;
                b[i] = b[i] / 2 ;
            }

          cout<<ans<<endl ; 
        }



    

    return 0 ; 
}