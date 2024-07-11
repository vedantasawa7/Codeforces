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
        int n,m,k ; 
        cin>>n>>m>>k ; 
        
        string s ; 
        cin>>s ; 

        if(m >= n+1){
            cout<<"YES"<<endl ; 
            continue ; 
        }
        int j = m-1 , w = 0 , g = 0 ; 

        for(int i=0 ; i<n; i++ , j--){
            if(s[i] == 'L' ){
                j = m ;  
            }
            else if(s[i] == 'W' && j<=0){
                w++ ;  
            }
            else{
                if(j<=0){
                    g = 1 ; 
                    break ; 
                }
            }
        }
3
        if(w > k){
            cout<<"NO"<<endl ; 
            continue ; 
        }

        if(g == 1){
            cout<<"NO"<<endl ; 
        }
        else{
            cout<<"YES"<<endl;
        }


    }

    return 0 ; 
}