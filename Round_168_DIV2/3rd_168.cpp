#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
#define MOD 1000000007
 

 // done it 
 
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;

    ll t ; 
    cin>>t ; 

    while(t--){
        ll n ; 
        cin>>n ; 
        
        string s ; 
        cin>>s ; 

        if(n==2){
            cout<<1<<endl ; 
            continue ; 
        }
        int ans = 0 ;
        s[0] = '(';

        for(int i=2 ; i<n ; i++){

            if(s[i-1] == ')'){
                s[i] = '(' ; 
            }
            else{
                s[i] = ')' ; 
            }
            i++ ; 
        }

        stack<int>store ; 

        for(int i=0 ; i<n ; i++){
            
            if(s[i] == ')'){
                ans = ans + i - store.top() ; 
                store.pop() ; 
            }
            else{
                store.push(i) ; 
            }
        }

        cout<<ans<<endl ; 




    }

    return 0 ; 
}