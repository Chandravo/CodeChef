#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
 long long i,j,k;
 long long cnt=0;
 int a,b,c,x,y,z;
 cin>>a>>b>>c;
 cin>>x>>y>>z;
 for(i=0;i<=20;i++)
 {
  for(j=0;j<=20;j++)
  {
    for(k=0;k<=20;k++)
    {
      if(i*a+j*b+k*c<=240)
      cnt=max(cnt,i*x+j*y+k*z);
    }
  }
 }
 cout<<cnt<<endl;
}
return 0;
}