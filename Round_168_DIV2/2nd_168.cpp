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
        
        vector<vector<char>>s(2,vector<char>(n)) ; 

        for(int i=0 ; i<2 ; i++){
            for(int j=0 ; j<n ; j++){
                cin>>s[i][j] ; 
            }
        }

        int ans = 0 ; 

        if(n<=2){
            cout<<0<<endl ; 
            continue ; 
        }

        for(int i=0 ; i<2 ; i++){
            for(int j=0 ; j<n ; j++){

                if(j+2<n && i==0 && s[i][j] =='x' && s[i][j+2] == 'x' && s[i][j+1] == '.' && s[i+1][j+1] =='.' && s[i+1][j] == '.' && s[i+1][j+2] == '.'){
                    ans++ ; 
                }

                if(j+2<n && i==1 && s[i][j] =='x' && s[i][j+2] == 'x' && s[i][j+1] == '.' && s[i-1][j+1] =='.' && s[i-1][j] == '.' && s[i-1][j+2] == '.'){
                    ans++ ; 
                }
            }
        }

        cout<<ans<<endl ; 





    }

    return 0 ; 
}