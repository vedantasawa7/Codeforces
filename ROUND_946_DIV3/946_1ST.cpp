#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin>>t ; 

    while(t--){
        int x,y ; 
        cin>>x>>y ; 

        int screen  = 0 ; 
        int remaining = 0 ;

        if(y == 0 ){
            screen = 0 ; 
            remaining = 0 ; 
        }

        else if(y%2 == 0){
            screen = y/2 ; 
            remaining = (y/2)*7 ;
        }
        else{
            screen = y/2 + 1 ; 
            remaining = (y/2)*7 + 11 ;
        }

        if(x - remaining <= 0 ){
            cout<<screen<<endl ;
        }
        else{
            x = x - remaining ; 

            if(x%15 == 0){
                screen = screen + x/15 ;
            }
            else{
                screen = screen + 1 + x/15 ; 
            }

            cout<<screen<<endl ; 
        }
        


    }

    return 0 ; 
}