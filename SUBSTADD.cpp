//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    vector<int> res;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int h=1;
        for (int i=0;i<n;i++){
            if ((b[i]-a[i])!=x && (b[i]-a[i])!=y ){
                h=0;
                break;
            }
        }
        res.push_back(h);
    }
    for (int i:res){
        if (i==1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}