#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin >>t;

    while(t--){
        int n;
        cin>>n;
        if(n<6){
            cout<<0;
        }
       else{
           int a = (n-6)/7;
           cout<<a+1;
       }
        cout<<endl;
    }
}