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
        
        string s ; 
        cin>>s ; 

        ll ones = 0 ; 
        ll zeros = 0 ; 

        for(int i=0 ; i<n ; i++){
            if(s[i] == '1') ones++ ;
            else {
                while(i+1<n && s[i+1] =='0' ){
                    i++ ; 
                }
                zeros++ ;
            }
        }

        if(zeros >= ones){
            cout<<"NO"<<endl ;
        }
        else{
            cout<<"YES"<<endl ;
        }



    }

    return 0 ; 
}