#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int Max(vector<int> vec){
    int maxi = INT_MIN;
    for(int number : vec){
        maxi = max(maxi,number);
    }
    return maxi;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int T; cin >>T;
    int N,K;
    
    while(T--){
        cin>>N>>K;
        int a[N];
        for(int i =0; i<N;i++){
            cin >> a[i];
        }
        int n = N - K + 1;
        vector<int> v;
        for(int i =0;i<n;i++){
            
            int j=i;
            for(int k=1;k<=K;k++){
                v.push_back(a[j]);
                j++;
                
                
            }
            cout << Max(v)<<" ";
            v.clear();
        }
        
    }
    cout << endl;
     
    return 0;
}
