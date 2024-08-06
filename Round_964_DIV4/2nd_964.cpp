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
        ll a1 , a2 , b1 , b2  ; 
        cin>>a1>>a2>>b1>>b2 ;

        int wins = 0 ; 

        vector<vector<int>>sumeet ;

        sumeet.push_back({a1, b1, a2, b2}) ; 
        sumeet.push_back({a1, b2, a2, b1}) ;

        for(int i=0 ; i<2 ; i++){
            if(sumeet[i][0] > sumeet[i][1]  && sumeet[i][2] > sumeet[i][3]){
                wins++ ; 
            }
            if(sumeet[i][0] > sumeet[i][1] && sumeet[i][2] == sumeet[i][3]){
                wins++ ; 
            }
            if(sumeet[i][2] > sumeet[i][3] && sumeet[i][0] == sumeet[i][1]){
                wins++ ; 
            }
        }


        
        cout<<wins*2<<endl ; 

        
        
        


    }

    return 0 ; 
}