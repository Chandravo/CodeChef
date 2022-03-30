//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main(){
    vector<int> ans;
    int arr[]={2048,1024,512,256,128,64,32,16,8,4,2,1};
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int res=0;
        while(n!=0){
            for (int i:arr){
                if (n>=i){
                    n=n-i;
                    res++;
                    break;
                }
            }
        }
        ans.push_back(res);
    }
    for (int i:ans){
        cout<<i<<endl;
    }
}