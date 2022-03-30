//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    vector<string> result;
    while(t--){
        string s;cin>>s;
        stack <char> l;
        string res;
        for (int i=0;i<s.length();i++){
            if (s[i]>='a' && s[i]<='z'){
                res+=s[i];
            }
            else if (s[i]=='('){
                l.push(s[i]);
            }
            else if (s[i]==')'){
                while (l.top()!='('){
                    res+=l.top();
                    l.pop();
                }
                l.pop();
            }
            else{
                l.push(s[i]);
            }
        }
        result.push_back(res);
    }
    for (string i:result){
        cout<<i<<endl;
    }
}