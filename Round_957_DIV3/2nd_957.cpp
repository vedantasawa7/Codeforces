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
        ll n,k ; 
        cin>>n>>k ; 
        
        vector<int>a(k) ; 

        
        for(int i=0 ; i<k ; i++){
            cin>>a[i] ; 
        }

        sort(a.begin() , a.end()) ; 

        ll stop = 0 ; 
        ll sum = 0 ; 

        for(int i=0 ; i<k-1 ; i++){
            stop += a[i] - 1  ; 
            sum += a[i] ; 
        }

        stop = stop + sum ; 

        cout<<stop<<endl ; 


    }

    return 0 ; 
}