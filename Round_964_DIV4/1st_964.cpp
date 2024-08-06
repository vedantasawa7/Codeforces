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
        
        int sum = 0 ; 

        while(n){
            sum += n%10 ; 
            n = n/10 ; 
        }

        cout<<sum<<endl ;



    }

    return 0 ; 
}