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

        string t ; 
        cin>>t ; 
        int count = 0 ;

        int j = 0 ; 
        int m = t.size() ; 

        for(int i=0 ; i<s.size() ; i++){

            if(j<m && s[i] == t[j]){
                j++ ; 
            }
            
            if(s[i] == '?'){
                s[i] = t[j%m] ; 
                j++ ; 
            }
            
        }

        
        if(j<m){
            cout<<"NO"<<endl ; 
            continue ; 
        }
        else{
            cout<<"YES"<<endl ; 
        }

        cout<<s<<endl ; 

    }

    return 0 ; 
}