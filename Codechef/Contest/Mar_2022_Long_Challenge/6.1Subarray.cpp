#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long mod=998244353;
        long long n;
        cin>>n;
        string s;
        cin>>s;

        long long a[n]={0};
        long long c=1;
        long long sol=0;

        if(s[0]=='1'){
            a[0]=1;
        }
        long long arr=a[0];
        for(long long i=1;i<n;i++){
            if(s[i]=='1'){
                arr+=(i+1);
            }
            a[i]=arr;
            a[i]=a[i]%2;
        }

        for(long long i=n-1;i>=0;i--){
            if(a[i]==1){
                sol+=c;
                sol=sol%mod;
            }
            c=c*2;
            c=c%mod;

        }
        cout<<sol%mod<<endl;
    }
}