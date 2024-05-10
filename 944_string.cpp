#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int t ;
    cin>>t ; 
    while(t--){

        string s ; 
        cin>>s ; 

        int n = s.size() ; 
        int m = 0 ; 

        char first = s[0] ; 

        for(int i=0 ; i<n ; i++){
            if(first == s[i]){
                m++ ; 
            }
        }

        if(m == n || n == 1){
            cout<<"NO"<<endl ;
        }
        else {
            cout<<"YES"<<endl ; 
            
            for(int i=0 ; i<n ; i++){
                if(s[i] != s[n-1]){
                    char a = s[i] ; 
                    s[i] = s[n-1] ; 
                    s[n-1] = a ; 
                    break ; 
                }
            }

            cout<<s<<endl ;


        }
    }

    return 0 ; 
}