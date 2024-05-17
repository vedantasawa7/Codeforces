#include<bits/stdc++.h>
using namespace std ; 

int main(){

    int t ;
    cin>>t ; 

    while(t--){
        long long p1,p2,p3 ;
        cin>>p1>>p2>>p3 ;

        int draw = 0 ; 
        priority_queue<int>store ;

        if((p1+p2+p3) == 0){
            cout<<0<<endl;
        }
        else if((p1+p2+p3)%2 ==1){
            cout<<-1<<endl ;
        }
        else{
            if(p1>0)
            store.push(p1) ;
            if(p2>0)
            store.push(p2) ;
            if(p3>0)
            store.push(p3) ;

            while(store.size() > 1){
                int m  = store.top();
                store.pop() ;
                int n = store.top() ;
                store.pop() ;
                m-- ;
                n-- ;
                draw++ ;
                if(m > 0){
                    store.push(m) ;
                } 
                if(n > 0){
                    store.push(n) ;
                }
                
            }

            cout<<draw<<endl ;

        }
        


    }
    return 0 ;
}