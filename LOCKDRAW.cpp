//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    vector<int> res;
    while(t--){
        int arr[3];
        for (int i=0;i<3;i++){
            cin>>arr[i];
        }
        int sum1=arr[0]+arr[1];
        int sum2=arr[0]+arr[2];
        int sum3=arr[1]+arr[2];
        int h=0;
        for (int i=0;i<3;i++){
            if (arr[i]==sum1 || arr[i]==sum2 || arr[i]==sum3){
                h=1;
                break;
            }
        }
        res.push_back(h);
    }
    for (int i:res){
        if (i==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}