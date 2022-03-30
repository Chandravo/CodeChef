//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int check_same(int *p,int n){
    int temp=*p;
    int ret=1;
    for (int i=0;i<n;i++){
        if (*(p+i)!=temp){
            ret=0;
            break;
        }
    }
    return ret;
}
int func(int *p,int n){
    int turns=0;
    while(check_same(p,n)==0){
        turns++;
        int maxi=distance(p,max_element(p,p+n));
        for (int i=0;i<n;i++){
            if (i!=maxi){
                (*(p+i))++;
            }
        }
    }
    return turns;
}
int main(){
    int t;cin>>t;
    vector<int> res;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int *p=arr;
        int ans=func(p,n);
        res.push_back(ans);
    }
    for (int i:res){
        cout<<i<<endl;
    }   
}