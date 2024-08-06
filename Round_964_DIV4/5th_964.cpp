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
        ll l,r ; 
        cin>>l>>r ;


        priority_queue<ll,vector<int> , greater<int>>pq1 ; 
        ll sum = 0; 
        for(int i=l ; i<=r ; i++){
            pq1.push(i) ; 
            sum += i ; 
        } 

// unable to do this but can be done later to try it 


        
        



    }

    return 0 ; 
}