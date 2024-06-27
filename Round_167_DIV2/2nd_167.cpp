#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
#define MOD 1000000007
 
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    int t ; 
    cin>>t ; 

    while(t--){
        string a ; 
        string b ; 
        cin>>a ;  
        cin>>b ; 

        int la = a.size() ; 
        int lb = b.size() ; 

        int len = lb ;

        for(int i=0 ; i<lb ; i++){
            int cur = i , check = i ; 
            for(int j=0 ; j<la ; j++){
                if(a[j] == b[check]){
                    check++ ; 
                    if(check == lb)
                        break ; 
                    
                }
                
            }
            
            len = min(len , cur + lb - check) ; 
        } 
        
        len += la ; 
        cout<<len <<endl ; 



    }

    return 0 ; 
}