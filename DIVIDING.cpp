#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    int x,sum=0;
    for (int i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }

    if (sum==(n*(n+1))/2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
