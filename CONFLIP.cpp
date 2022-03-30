//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int fun(int i, int n, int q){
    if (n%2!=0){
        if (i==q){
            return (n/2);
        }
        else{
            return ((n/2)+1);
        }
    }
    else{
        return (n/2);
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        int g;cin>>g;
        while(g--){
            int i,n,q;
            cin>>i>>n>>q;
            cout<<fun(i,n,q);
        }
    }
}