#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    int t ; 
    cin>>t ; 

    while(t--){

        int n , f ,k ;
        cin>>n>>f>>k ; 

        vector<int>a(n) ;

        for(int i=0 ; i<n ; i++){
            cin>>a[i] ; 
        }

        int fav= a[f-1] ; 

        int fav_start = 0 ; 
        int fav_end = 0 ; 
        
        sort(a.rbegin() , a.rend()) ;

        for(int i=0 ; i<k ; i++){
            if(fav == a[i]){
                fav_start = 1 ;
                break ; 
            }
        }

        for(int i=k ; i<n ; i++){
            if(fav == a[i]){
                fav_end = 1 ;
                break ; 
            }
        }
        
        if(fav_start == 1 && fav_end == 1){
            cout<<"MAYBE"<<"\n" ;
        }

        else if(fav_start == 1 && fav_end == 0){
            cout<<"YES"<<"\n" ;
        }

        else{
            cout<<"NO"<<"\n" ; 
        }

    }

    return 0 ; 
}