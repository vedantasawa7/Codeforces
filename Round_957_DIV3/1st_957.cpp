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
        int a,b,c ; 
        cin>>a>>b>>c ; 
        
        int x = 5 ; 

        while(x--){
            if(a<=b && a <=c){
                a++;
            }
            else if(b<=a && b <=c){
                b++ ; 
            }
            else{
                c++ ; 
            }
        }

        cout<<a*b*c<<endl ; 



    }

    return 0 ; 
}