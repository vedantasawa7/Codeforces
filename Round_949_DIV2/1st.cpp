#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    int t ; 
    cin>>t ; 

    while(t--){
        long long l,r ; 
        cin>>l>>r ;

        long long score = 0 ; 

        int c = 1 ; 

        while(c <= r ){
            c = c*2 ;
            score++ ; 
        }       
        score-- ;

        cout<<score<<"\n" ;
        
    }
    return 0 ; 
}