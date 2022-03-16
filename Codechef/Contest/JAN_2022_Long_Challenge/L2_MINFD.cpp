/*
Chef wants to make a purchase. For this, he needs X

gold coins, but he has none at the moment.

Chef has N
fixed deposits, the ith of which is worth Ai coins. He wants to open the minimum number of these deposits so that he has at least X

coins.

You have to tell Chef the minimum number of fixed deposits he must open in order to have X

coins, or say that this is impossible.
Input Format

    The first line of input contains a single integer T

, denoting the number of test cases. The description of T
test cases follows.
The first line of each test case contains two space-separated integers — N
and X
, as described in the statement.
The second line of each test case contains N
space-separated integers — the ith of which is Ai

    .

Output Format

For each test case, output one line containing the answer — the minimum number of FDs Chef must 
open to have at least X
coins. If it is not possible for him to open FDs such that he has at least X coins, output −1. 
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	if(t>=1 and t<= 100){
	    
	    for(int i=0;i<t;i++){
	        int n,x,v;
	        
	        cin>>n>>x;
            int a[n];
	        if((n>=1 and n<=100) and (x>=1 and x<= 10000)){
	            
	            for(int i=0;i<n;i++){
	                cin>>v;
	                if(v<=100){
	                    a[i]=v;
	                }
	                
	            }
	            
	            sort(a,a+n,greater<int>());
	            
	            int sum=0,p=0;
	            
	            for(int i=0;i<n;i++){
	                sum+=a[i];
	                p++;
	                if(sum >= x){
	                    cout<<p<<endl;
	                    p=p+(2*n);
	                    break;
	                }
	            }
	            if(p==n){
	                cout<<"-1"<<endl;
	                
	            }
	            
	            
	            
	            
	            
	        }
	    }
	}
	
	
	return 0;
}
