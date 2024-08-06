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
        ll n , s , m; 
        cin>>n>>s>>m ; 
        
        vector<vector<ll>>a(n , vector<ll>(2)) ; 
        for(ll i=0 ; i<n ; i++){
            for(int j=0 ; j<2 ; j++){
            cin>>a[i][j] ; 
            }
        }

        if(a[0][0] >= s){
            cout<<"YES"<<endl ;
            continue ; 
        }
        if(m - a[n-1][1] >= s){
            cout<<"YES"<<endl ; 
            continue ; 
        }

        int check = 0 ; 

        for(int i=0 ; i<n-1 ; i++){
            if( a[i+1][0] - a[i][1] >= s){
                check = 1 ; 
                break ;
            }
        }

        if(check == 1){
            cout<<"YES"<<endl ;
            continue ;
        }

        cout<<"NO"<<endl ;



    }

    return 0 ; 
}