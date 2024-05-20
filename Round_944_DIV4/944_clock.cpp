#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int t ;
    cin>>t ; 
    while(t--){

        int a,b,c,d ; 
        cin>>a;
        cin>>b ; 
        cin>>c ;
        cin>>d ;

        if(a<b){
            if(a<c<b && (b<d|| d<a)){
                cout<<"YES"<<endl ; 
            }
            else if(a<d<b && (b<c|| c<a)){
                cout<<"YES"<<endl ; 
            }
            else {
                cout<<"NO"<<endl ; 
            }
        }
        else if(b<a){
           if(b<c<a && (a<d||d<b)){
                cout<<"YES"<<endl ; 
            }
            else if(b<d<a && (a<c||c<b)){
                cout<<"YES"<<endl ; 
            }
            else {
                cout<<"NO"<<endl ; 
            }
        }
    }

    return 0 ; 
}