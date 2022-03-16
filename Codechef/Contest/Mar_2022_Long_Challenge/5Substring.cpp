#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int len = s.size();
        int res=0,cn=0;
        for(int i=0;i<len;i++){
            if(s[i]!=s[0] && s[i]!=s[len-1]){
                cn+=1;
            }
            else{
                cn=0;
            }
            res = max(res,cn);

        }
        if(res==0){
            cout<<-1<<endl;
        }
        else{
            cout<<res<<endl;
        }
    }
}