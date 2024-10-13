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
        ll n,r ; 
        cin>>n>>r ;  
        
        vector<ll>a(n) ; 
        for(ll i=0 ; i<n ; i++){
            cin>>a[i] ; 
        }

        ll sum = 0 ; 

        for(int i=0 ; i<n ; i++){
            sum += a[i] ; 
        }

        ll rem = 2*r - sum ; 

        ll left = 0 ; 

        for(int i=0  ; i<n ; i++){
            left += a[i]%2 ; 
        }

        if(left >= rem)
        cout<<sum -left+rem<<endl ; 

        else{
            cout<<sum<<endl ;
        }

    }

    return 0 ; 
}