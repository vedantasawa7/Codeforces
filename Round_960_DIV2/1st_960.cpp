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

        ll maxi = 0 ; 

        map<ll,ll>mp ; 

        for(auto i:a){
            mp[i]++ ;  
        }

        int check = 0 ; 

        for(auto i:mp){
            
            if(i.second%2 == 1){
                check = 1 ; 
                break ; 
            }  
        }

        if(check == 0){
            cout<<"NO"<<endl ;
        }
        else{
            cout<<"YES"<<endl ;
        }




        



    }

    return 0 ; 
}