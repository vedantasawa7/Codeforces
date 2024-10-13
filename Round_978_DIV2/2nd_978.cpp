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
        ll n ,x; 
        cin>>n>>x ; 
        
        vector<ll>a(n) ; 
        for(ll i=0 ; i<n ; i++){
            cin>>a[i] ; 
        }

        sort(a.begin(), a.end()) ;

        ll ans = 0 ; 

        ll net = 0 ; 

        for(int i =0 ; i<n ; i++){
            net += a[i] ;
        }

        ll maxi = a[n-1] ; 

        for(int i=n-1 ; i>=0 ; i--){
            ll sum = 0 ; 
            ll pau = a[i] ; 
            ll j = i ; 

            ll run = x ; 

            while(sum < pau && i >0 && run){
                i-- ; 
                
                
                if(sum + a[i] <= pau){
                    a[i] = 0 ; 
                    sum += a[i] ; 
                }else{
                    a[i]  = pau - sum ; 
                    sum = pau; 
                }

                run-- ; 
                
            }

            ans += pau ; 
        }

        

        ans = max(ceil(new/x) , maxi) ; 

        cout<<ans<<"\n" ;


    }

    return 0 ; 
}