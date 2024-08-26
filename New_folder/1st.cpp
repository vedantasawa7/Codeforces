#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
#define MOD 1000000007
 
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;


    ll t ; 
    cin>>t ; 

    while(t--){
        ll n ; 
        cin>>n ; 

        if(n == 10000){
            cout<<"NO"<<endl ; 
            continue ; 
        }
        
        string s = to_string(n) ; 
        if(s.size() > 2 && s[0] == '1' && s[1] == '0'){

            int y = 1 ; 

            if(s[2] == '0'){
                    y = 0 ; 
            }

            if(s.size() == 3){
                if(s[2] < '2'){
                    y = 0 ; 
                
            }

            // if(s.size() == 4){
            //     if(s[2] == '0'){
            //         y = 0 ; 
            //     }
            // }
            

            // for(int i=2 ; i< s.size() ; i++){
            //     if(s[i] == '0' ){
            //         y = 0 ; 
            //         break ;
            //     }
            // }

            if(y == 1){
                cout<<"YES"<<endl ;
            }
            else{
                cout<<"NO"<<endl ;
            }
            
        }
        else{
            cout<<"NO"<<endl ;
        }



    }

    return 0 ; 
}