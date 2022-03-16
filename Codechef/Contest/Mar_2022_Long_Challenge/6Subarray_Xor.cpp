#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int N;
        cin>>N;
        string s;
        cin>>s;
        
        int a[(N*(N+1))/2];
        int p=0;
        for(int i=0;i<N;i++){
            for(int j=1;j<=N-i;j++){
                string r = s.substr(i,j);
                int n= stoi(r,0,2);
                a[p]= n;
                p++;

            }
        }
        int b=0;
        for(int i=0;i<(N*(N+1))/2;i++){
            b^=a[i];

        }
        cout<<b<<endl;


        
    }
    return 0;
}