#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
#define MOD 1000000007
 
 // Unable to solve the problem should be done by bitwise operation of n number 
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;

    ll t ; 
    cin>>t ; 

    while(t--){
        ll n ; 
        cin>>n ; 

        if (n==1){
            cout<<1<<endl ;
            cout<<1<<endl ; 
            continue ; 
        }

        vector<ll>ans ; 
        ll com = 1 ; 

        while(n > com){
            com = (com * 2) ;

        }

        com  = com/2 ; 

        if(n == com){
            cout<<1<<endl ; 
            cout<<n<<endl ;
            continue ; 
        }

        ans.push_back(n) ; 
        ll a = n-1;

        while(a >= com){
            if((ans.back() | a) == n){
                ans.push_back(a) ; 
            }
            a-- ; 
        }
        com = com/2 ; 
        while(a >= com){
            if((ans.back() | a) == n){
                ans.push_back(a) ; 
                break ; 
            }
            a-- ; 
        }


        cout<<ans.size()<<endl ;
        for(int i=ans.size()-1; i>=0; i--){
            cout<<ans[i]<<" " ;
        }
        cout<<endl ; 



        


    }

    return 0 ; 
}