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
        string s,t ; 
        cin>>s>>t ; 

        int n = s.size() ; 
        int m = t.size() ;
        int ans = 0 ; 

        for(int i=0 ; i<n ; i++){
            if( i < m && s[i] == t[i]){
                ans +=1 ; 
            }
            else{
                break ;
            }
        }

        
            int n1 = n-ans ; 
            int m1 = m-ans ;
            if(ans != 0) ans+=1 ; 
            
            ans += n1 + m1 ;

            cout<<ans<<endl;

            

        // for(int i=0 ; i<m; i++){
        //     if(t[i] == s[0]){
        //         int j = i ; 
        //         int same = 0 ; 
        //         int k = 0 ; 
        //         while(t[j] == s[k]){
        //             same += 1 ; 
        //             j += 1 ; 
        //             k += 1 ; 
        //         }
        //         maxi = max(maxi, same) ;
        //     }

        // }

        // for(int i=0 ; i<n; i++){
        //     if(s[i] == t[0]){
        //         int j = i ; 
        //         int same = 0 ; 
        //         int k = 0 ; 
        //         while(s[j] == t[k]){
        //             same += 1 ; 
        //             j += 1 ; 
        //             k += 1 ; 
        //         }
        //         maxi = max(maxi, same) ;
        //     }

        // }

        // if(maxi == 0){
        //     cout<<n+m<<"\n" ;
        //     continue ;
        // }

        // cout<<n+m-maxi +1 <<"\n" ; 
        



    }

    return 0 ; 
}