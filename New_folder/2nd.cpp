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
        ll n ; 
        cin>>n ; 
        
        vector<ll>a(n) ; 
        for(ll i=0 ; i<n ; i++){
            cin>>a[i] ; 
        }

        if(n == 1 || n == 2){
            cout<<"YES"<<endl ;
            continue ;  
        }
        
        int y = 1 ; 

        vector<int>check(n+2,0) ; 

        check[a[0]] = 1 ; 

        for(int i=1 ; i<n  ; i++){
            // if(a[i] == n && check[n-1] == 0 ){
            //     y = 0 ; 
            //     break ; 
            // }
            // else if(a[i] == 1 && check[2] == 0){
            //     y = 0 ; 
            //     break ; 
            // }
            // else if(a[i] == n && check[n-1] == 1 ){
            //     check[a[i]] = 1 ;
            //     continue ;  
            // }
            // else if(a[i] == 1 && check[2] == 1){
            //     check[a[i]] = 1 ; 
            //     continue ; 
            // }

            if(check[a[i]+1] == 1 || check[a[i]-1] == 1){
                check[a[i]] = 1 ; 
                continue ; 
            }
            else{
                y = 0 ; 
                break ; 
            }
        }

        if(y == 1){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }



    }

    return 0 ; 
}