#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    long long t ; 
    cin>>t ; 

    while(t--){

        long long n ; 
        cin>>n ; 

        vector<long long>a(n) ;
        vector<long long>b(n) ;

        for(long long i=0 ; i<n ; i++){
            cin>>a[i] ; 
        }
        for(long long i=0 ; i<n ; i++){
            cin>>b[i] ; 
        }

        long long m ; 
        cin>>m ; 

        vector<long long>d(m) ;

        for(long long i=0 ; i<m ; i++){
            cin>>d[i] ; 
        }

        long long j =0 ; 

        long long notequal = 0 , done = 0  ;

        for(long long i=0 ; i<n ; i++){
            if(a[i] == b[i]){
                continue ; 
            }
            else{
                notequal++ ; 
                for( ; j<m ; j++){
                    if(b[i] == d[j]){
                        done++ ; 
                        j++ ;
                        break ; 
                        
                    }
                }

            }
        }

        long long notequalr = 0 , doner = 0  ;

        long long k = m-1 ; 

        for(long long i=0 ; i<n ; i++){
            if(a[i] == b[i]){
                continue ; 
            }
            else{
                notequalr++ ; 
                for( ; j>=0 ; j--){
                    if(b[i] == d[j]){
                        doner++ ; 
                        j-- ;
                        break ; 
                        
                    }
                }

            }
        }

        if(notequal == done || notequalr == doner){
            cout<<"YES"<<"\n" ; 
        }
        else {
            cout<<"NO"<<"\n" ; 
        }
    }

    return 0 ; 
}