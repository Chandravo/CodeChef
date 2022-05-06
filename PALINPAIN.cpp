//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    vector<string> res;
    while(t--){
        int x,y;cin>>x>>y;
        if (x==y && x%2!=0){
            res.push_back("-1");
        }
        else{
            char a[x+y];
            int q=0,w=x+y-1;
            if ((x+y)%2==0){
                
                for (int i=0;i<x/2;i++){
                    a[q]='a';
                    a[w]='a';
                    q++;w--;
                }
                for(int i=0;i<y/2;i++){
                    a[q]='b';
                    a[w]='b';
                    q++;w--;
                }

            }
            else{
                int z,zz;
                char l,ll;
                if (x%2==0){
                    zz=x;
                    z=y;
                    l='b';
                    ll='a';

                }
                else{
                    zz=y;
                    z=x;
                    l='a';
                    ll='b';
                }
                for(int i=0;i<z/2;i++){
                    a[q]=l;
                    a[w]=l;
                    q++;w--;
                }
                for(int i=0;i<zz/2;i++){
                    a[q]=ll;
                    a[w]=ll;
                    q++;w--;
                }
                a[q]=l;
            }
            res.push_back((string)a);
            reverse(a,a+((x+y)/2));
            if ((x+y)%2==0){
                reverse(a+(x+y)/2,a+x+y);
            }
            else{
                reverse(a+1+(x+y)/2,a+x+y);
            }
            res.push_back((string)a);

            

        }
    }
    for(string i:res){
        cout<<i<<endl;
    }
}