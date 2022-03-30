//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    vector<int> res;
    while(t--){
        int n,k;cin>>n>>k;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int kid=0,net=0;
        if (k<=n/2){
            kid = accumulate(arr,arr+k,kid);
            net = accumulate(arr,arr+n,net);
        }
        else{
            kid = accumulate(arr,arr+n-k,kid);
            net = accumulate(arr,arr+n,net);
        }
        
        int ans=net-(2*kid);
        res.push_back(ans);
        
    }
    for (int i:res){
        cout<<i<<endl;
    }
}