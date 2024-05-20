#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin>>t ; 

    while(t--){
        long long n ; 
        cin>>n ; 
        string s ; 
        cin>>s ;
     
        set<char> change(s.begin(), s.end());
        string r(change.begin(), change.end());

        string neww = "";


        int m = r.size() ; 

        unordered_map<char,char>exchange ; 

        for(int i=0 ; i<m; i++){
            exchange[r[i]] = r[m-i-1] ;
        }

        
        for(int i=0 ; i<n ; i++){
            neww = neww + exchange[s[i]] ;
        }

        cout<<neww<<endl ; 

        
    }

    return 0 ; 
}