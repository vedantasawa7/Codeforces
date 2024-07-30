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
        string s ; 
        cin>>s ; 

        string ans = "" ;
        int n = s.size() ; 

        int i = 0; 

        

        if(n==1){
            char c ; 
            if(s[0] == 'a'){
               c = 'c' ; 
            }
           else {
              c = s[0] - 1 ; 
            }

        ans = s +c ; 

        cout<<ans<<endl ; 
        continue ; 
        }
        for(; i < n-1 ; i++){
            if(s[i] == s[i+1]){
                ans = ans + s[i] ; 
                break ; 
            }

            ans = ans+s[i] ; 
        }

        if(i == n-1){
            ans += s[n-1] ; 
        }
    
        char c ; 
        if(s[i] == 'a'){
            c = 'c' ; 
        }
        else {
        c = s[i] - 1 ; 
        }

        ans = ans +c ; 

        i++ ; 

        for(; i<n ; i++){
            ans = ans+s[i] ; 
        }

        

        cout<<ans<<endl ; 


    }

    return 0 ; 
}