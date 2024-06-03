#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    int n ; 
    cin>>n ; 

    while(n--){
        int n , m ; 
        cin>>n>>m ; 

        string a ;
        cin>>a ; 

        unordered_map<char,int>store ; 

        for(int i=0 ; i<n ; i++){
            store[a[i]]++ ;
        }

        int count = 0 ; 

        string b = "ABCDEFG" ;

        for(int i=0 ; i<7 ; i++){
            if(store[b[i]]< m){
                count = count + m - store[b[i]] ;
            }
        }

        cout<<count<<"\n" ; 


    }

    return 0 ; 
}