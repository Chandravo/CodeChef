//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int fun(int arr[],int n){
    sort(arr,arr+n);
    int min_diff=arr[1]-arr[0];
    int diff;
    for (int i=1;i<n-1;i++){
        diff=arr[i+1]-arr[i];
        if (diff<min_diff){
            min_diff=diff;
        }
    }
    return min_diff;
}
int main()
{
    int t;cin>>t;
    vector<int> vect;
    int n,x;
    while(t--){
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        vect.push_back(fun(arr,n));
    }
    for (int i:vect){
        cout<<i<<endl;
    }
}