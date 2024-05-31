// unable to complete the question just tried some question 

#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    int t ; 
    cin>>t ; 

    while(t--){

        long long n,m ; 

        cin>>n>>m ; 
        int ans = n ; 

        if(m==0){
            cout<<n<<"\n" ;
        }
        else if(n == 0){
            while(m--){
                ans = ans | n+1 ;
            }
            cout<<ans<<"\n" ;
        }
        else {
            int goon  ; 
                goon = m/4 ;
            if(goon == 0){
                goon = 1 ; 
            }


            while(goon--){
                ans = ans | n-1 ;
                ans = ans | n+1 ;

            }
            cout<<ans<<"\n" ;
        }

        
        
    }
    return 0 ; 
}