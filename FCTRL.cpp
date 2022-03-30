//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int trailing_zeroes(int n){
    int m=5,res=0;
    while (m<=n){
        res+=n/m;
        m*=5;
    }
    return res;
}
int main()
{
    vector<int> res;
    int t;
    cin>>t;
    int n;
    while (t--){
        cin>>n;
        res.push_back(trailing_zeroes(n));
    }
    for (int i:res){
        cout<<i<<endl;
    }
}