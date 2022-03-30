//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int func(int arr[],int n){
    int nc=0;
    int min=arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]<=min){
            min=arr[i];
            nc++;
        }
    }
    return nc;
}
int main(){
    vector <int> res;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=func(arr,n);
        res.push_back(ans);
    }
    for (int i:res){
        cout<<i<<endl;
    }
}