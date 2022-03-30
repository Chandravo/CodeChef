#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int k;cin>>k;
    int res;
    for (int i=0;i<n;i++)
    {
        int x;cin>>x;
        if (x%k==0)
        {
            res++;
        }
    }
    cout<<res;
}