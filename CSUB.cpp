//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        string str;;
        cin>>str;
        long long no1=0,ans;
        for (long long i=0;i<n;i++){
            if (str[i]=='1'){
                no1++;
            }
        }
        ans=no1*(no1+1);
        cout<<ans/2<<endl;
    }
}