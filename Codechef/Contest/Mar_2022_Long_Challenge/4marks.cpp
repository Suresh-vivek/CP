#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int N,X;
        cin>>N>>X;

        if(X==0){
           
            cout<<"YES"<<endl;
            cout<<0<<" "<<0<<" "<<N<<endl;
        }
        else if(X>3*N){
            cout<<"NO"<<endl;

        }
        else{

            if(X%3==0){
                cout<<"YES"<<endl;
                int v=N- X/3;
                cout<<X/3<<" "<<0<<" "<<v<<endl;

            }
            else{
                int c,w,u;
                c=(X/3) + 1;
                w= 3*c -X;
                u= N- c- w;
                 if(u<0){
                     cout<<"NO"<<endl;
                 }
                 else{
                     cout<<"YES"<<endl;
                     cout<<c<<" "<<w<<" "<<u<<endl;
                 }




            }

        }
    }
    return 0;
}
