//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<string> res;
    int t;cin>>t;
    while(t--){
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        int req=x-y;
        int h=0;
        int p,c;
        for (int i=0;i<n;i++){
            cin>>p>>c;
            if (p>=req && k>=c){
                h=1;
            }
        }
        if (h==1){
            res.push_back("LuckyChef");
        }
        else{
            res.push_back("UnluckyChef");
        }

    }
    for (string i:res){
        cout<<i<<endl;
    }
}