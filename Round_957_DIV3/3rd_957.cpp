#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
#define MOD 1000000007
 
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;

    int t ; 
    cin>>t ; 

    while(t--){
        ll n,m,k ; 
        cin>>n>>m>>k ;

        for(int i=n ; i > m ; i--){
            cout<<i<<" " ; 
        }

        for(int i=1 ; i<=m ; i++){
            cout<<i<<" " ;
        }

        cout<<endl ; 
        
        



    }

    return 0 ; 
}