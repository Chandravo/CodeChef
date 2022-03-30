#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       ll a,b;
       cin>>a>>b;
       if(a==b){
           cout<<0<<"\n";
       }
       else {
           if(a<b)
           cout<<((b-a)/2+1)<<"\n";
           else{
               if((a-b)%2==0)
               cout<<((b-a)/2+1)<<"\n";
               else
                cout<<((b-a)/2)<<"\n";
           }
       }
     
    }
    
    
    
    return 0;
    
}